#include <stdio.h>

int main()
{
    char arr[1024];
    int index=0;
    int code=0;

    printf("jinruminganciguanlixitong\n");
    while(1){
        printf("1--tianjiayigeminganzifu\n");
        printf("2--shanchuzuihouyigeminganzifu\n");
        printf("3--xianshisuoyouminganzifu\n");
        printf("4--tihuanminganzifu\n");
        printf("5--tuichu\n");

        printf("qingshuruxiangyingdegongnengbianhao\n");
        
        scanf("%d",&code);
        if(code==1){
            char a;
            char x;
            printf("qingshuruyaocucundeminganzifu\n");
            scanf("%c",&x);
            scanf("%c",&x);

            arr[index]=a;
            index=index+1;

            printf("tianjiachenggong,dianjihuichejixu\n");
            scanf("%c",&x);
            scanf("%c",&x);   
        }
        if(code==2){
           
            printf("删除最后一个敏感字符\n");
            index--;

            printf("删除成功点击回车继续\n");
            char x;
            scanf("%c",&x); 
            scanf("%c",&x); 


        }
        if(code==3){
             char x;
             int i=0;
             printf("xianshisuoyouyijingtianjiademinganzifu\n");
             for(;i<index;i++){
                 printf("%c\n",arr[i]);
             }
             printf("dainjihuichejixu\n");
             scanf("%c",&x);
             scanf("%c",&x);
        }
        if(code==4){

        }
        if(code==5){
            printf("dianjihuichetuichuxitong\n");
            break;

        }

    }

    return 0;

}