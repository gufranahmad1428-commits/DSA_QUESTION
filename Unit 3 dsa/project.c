#include <stdio.h>

#define MAX 5

char playlist[MAX][50];

int front = -1;
int rear = -1;


// ==================== ADD SONG ====================
void enqueue()
{
    char song[50];

    // Queue Full condition
    if ((rear + 1) % MAX == front)
    {
        printf("\nPlaylist is Full!\n");
        return;
    }

    printf("\nEnter song name: ");
    scanf(" %[^\n]", song);

    // First song
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX;
    }

    strcpy(playlist[rear], song);

    printf("\nSong added successfully!\n");
}


// ==================== PLAY SONG ====================
void dequeue()
{
    if (front == -1)
    {
        printf("\nPlaylist is Empty!\n");
        return;
    }

    printf("\nPlaying Song: %s\n", playlist[front]);

    // Only one song present
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
}


// ==================== DISPLAY PLAYLIST ====================
void display()
{
    int i;

    if (front == -1)
    {
        printf("\nPlaylist is Empty!\n");
        return;
    }

    printf("\n========== MUSIC PLAYLIST ==========\n");

    i = front;

    while (1)
    {
        printf("%s\n", playlist[i]);

        if (i == rear)
        {
            break;
        }

        i = (i + 1) % MAX;
    }

    printf("====================================\n");
}


// ==================== CURRENT SONG ====================
void currentSong()
{
    if (front == -1)
    {
        printf("\nNo song is currently available.\n");
        return;
    }

    printf("\nCurrent Song: %s\n", playlist[front]);
}


// ==================== MAIN FUNCTION ====================
int main()
{
    int choice;

    do
    {
        printf("\n\n====================================\n");
        printf("     MUSIC PLAYLIST MANAGEMENT\n");
        printf("====================================\n");

        printf("1. Add Song\n");
        printf("2. Play Next Song\n");
        printf("3. Display Playlist\n");
        printf("4. Current Song\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                currentSong();
                break;

            case 5:
                printf("\nThank you for using Music Playlist!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}