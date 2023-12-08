
void th_keyboard()
{
    // while(true)
    // {
        while(keyInput != 'q')
        {
            system("stty raw");
            keyInput = getchar();
            system("stty cooked"); 
        }
    //     break;
    // }
}