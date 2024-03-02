
#include <stdio.h>
int main()
{
    int cholate;
    scanf("%d", &cholate);

    int each_friend = cholate / 3;
    int Total_Friend = each_friend * 3;
    int Myslf_receive = cholate - Total_Friend;
    // int Myself_receive = cholate - friend_receive;

    printf("Each friend will receive %d chocolates", each_friend);
    printf("\n");
    printf("The number of remaining chocolates is %d", Myslf_receive);

    return 0;
}
