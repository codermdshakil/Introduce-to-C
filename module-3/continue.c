#include <stdio.h>

int main()
{

    // Skip specific number
    for (int i = 1; i <= 10; i++)
    {
        if (i == 8)
        {
            continue;
        }
        printf("%d\n", i);
    }

    // find odd number
    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i%2 == 0)
    //     {
    //         continue;
    //     }
    //     printf("%d\n", i);
    // }

    // Find Even number
    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i % 2 > 0)
    //     {
    //         continue;
    //     }
    //     printf("%d\n", i);
    // }

    return 0;
}



/**
- continue - যদি রাস্তায় সামনে কোণ বিপদ থাকে তাহলে আমরা কি করি লাপ দিয়ে পার হই ঠিক তেমনি continue ও কাজ করে । লুপ এর মধ্যে যখন যদি condition এ বলা থাকে যে আইখানে থাম তারপর থেকে চালাও এই কাজটি loop এর মধ্যে continue করে ।
- continue - এর নিছের লাইন কে skip করে।
*/
