#include <stdio.h>

int main()
{
    int status = 0;
    int choice, device, mode;

    int door = 1;
    int alarm = 2;
    int cctv = 4;
    int motion = 8;

    printf("1. Activate\n");
    printf("2. Deactivate\n");
    printf("3. Check Status\n");
    printf("4. Toggle\n");
    printf("5. Security Mode\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("1. Door\n2. Alarm\n3. CCTV\n4. Motion\n");
            printf("Enter device: ");
            scanf("%d", &device);

            switch(device)
            {
                case 1:
                    status = status | door;
                    break;
                case 2:
                    status = status | alarm;
                    break;
                case 3:
                    status = status | cctv;
                    break;
                case 4:
                    status = status | motion;
                    break;
                default:
                    printf("Invalid device\n");
            }
            break;

        case 2:
            printf("1. Door\n2. Alarm\n3. CCTV\n4. Motion\n");
            printf("Enter device: ");
            scanf("%d", &device);

            switch(device)
            {
                case 1:
                    status = status & (~door);
                    break;
                case 2:
                    status = status & (~alarm);
                    break;
                case 3:
                    status = status & (~cctv);
                    break;
                case 4:
                    status = status & (~motion);
                    break;
                default:
                    printf("Invalid device\n");
            }
            break;

        case 3:
            printf("1. Door\n2. Alarm\n3. CCTV\n4. Motion\n");
            printf("Enter device: ");
            scanf("%d", &device);

            switch(device)
            {
                case 1:
                    printf("%s\n", (status & door) ? "Door Active" : "Door Inactive");
                    break;
                case 2:
                    printf("%s\n", (status & alarm) ? "Alarm Active" : "Alarm Inactive");
                    break;
                case 3:
                    printf("%s\n", (status & cctv) ? "CCTV Active" : "CCTV Inactive");
                    break;
                case 4:
                    printf("%s\n", (status & motion) ? "Motion Active" : "Motion Inactive");
                    break;
                default:
                    printf("Invalid device\n");
            }
            break;

        case 4:
            printf("1. Door\n2. Alarm\n3. CCTV\n4. Motion\n");
            printf("Enter device: ");
            scanf("%d", &device);

            switch(device)
            {
                case 1:
                    status = status ^ door;
                    break;
                case 2:
                    status = status ^ alarm;
                    break;
                case 3:
                    status = status ^ cctv;
                    break;
                case 4:
                    status = status ^ motion;
                    break;
                default:
                    printf("Invalid device\n");
            }
            break;

        case 5:
            printf("1. Home Mode\n");
            printf("2. Away Mode\n");
            printf("3. Night Mode\n");
            printf("Enter mode: ");
            scanf("%d", &mode);

            switch(mode)
            {
                case 1:
                    status = status | door | cctv;
                    break;

                case 2:
                    status = status | door | alarm | cctv | motion;
                    break;

                case 3:
                    status = status | door | alarm | motion;
                    break;

                default:
                    printf("Invalid mode\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    printf("\nDoor: %s\n",
           (status & door) ? "Active" : "Inactive");

    printf("Alarm: %s\n",
           (status & alarm) ? "Active" : "Inactive");

    printf("CCTV: %s\n",
           (status & cctv) ? "Active" : "Inactive");

    printf("Motion: %s\n",
           (status & motion) ? "Active" : "Inactive");

    if((status & door) &&
       (status & alarm) &&
       (status & cctv) &&
       (status & motion))
    {
        printf("System is Fully Armed\n");
    }
    else
    {
        printf("System is NOT Fully Armed\n");
    }

    return 0;
}