
#include <windows.h>

// Define some constants for the window and the controls
#define WINDOW_WIDTH 300
#define WINDOW_HEIGHT 200
#define IDC_LABEL 101
#define IDC_BUTTON 102

// Declare some global variables for the window and the controls
HWND hwnd;    // handle of the main window
HWND hLabel;  // handle of the text label
HWND hButton; // handle of the button

// Define a callback function for handling window messages
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
    case WM_CREATE: // message sent when the window is created
        // Create a text label with some text and position it in the center of the window
        hLabel = CreateWindowW(L"Static", L"Hello, world!", WS_CHILD | WS_VISIBLE | SS_CENTER,
                               0, 0, WINDOW_WIDTH, WINDOW_HEIGHT / 2, hwnd, (HMENU)IDC_LABEL, NULL, NULL);

        // Create a button with some text and position it below the label
        hButton = CreateWindowW(L"Button", L"Click me", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                                WINDOW_WIDTH / 4, WINDOW_HEIGHT / 2, WINDOW_WIDTH / 2, WINDOW_HEIGHT / 4, hwnd, (HMENU)IDC_BUTTON, NULL, NULL);
        break;
    case WM_COMMAND: // message sent when a control is activated
        // Check which control sent the message
        switch (LOWORD(wParam))
        {
        case IDC_BUTTON: // the button was clicked
            // Change the text of the label to something else
            SetWindowTextW(hLabel, L"You clicked the button!");
            break;
        }
        break;
    case WM_DESTROY: // message sent when the window is closed
        // Terminate the application
        PostQuitMessage(0);
        break;
    default:
        // Let the default window procedure handle any other messages
        return DefWindowProcW(hwnd, msg, wParam, lParam);
    }
    return 0;
}

// Define the main function that creates and runs the window
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    // Define a window class structure with some properties and the callback function
    WNDCLASSW wc = {0};
    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hInstance = hInstance;
    wc.lpszClassName = L"myWindowClass";
    wc.lpfnWndProc = WndProc;

    // Register the window class
    if (!RegisterClassW(&wc))
        return -1;

    // Create the window with some properties and get its handle
    hwnd = CreateWindowW(wc.lpszClassName, L"My First GUI", WS_OVERLAPPEDWINDOW | WS_VISIBLE,
                         100, 100, WINDOW_WIDTH, WINDOW_HEIGHT, NULL, NULL, hInstance, NULL);

    // Check if the window was created successfully
    if (!hwnd)
        return -1;

    // Declare a message structure to store window messages
    MSG msg = {0};

    // Enter a loop that retrieves and dispatches window messages until WM_QUIT is received
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg); // translate keyboard messages
        DispatchMessage(&msg);  // invoke the callback function
    }

    // Return the exit code of the application
    return msg.wParam;
}
