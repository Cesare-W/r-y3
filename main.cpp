#include <iostream>
#include <ctime>
#include <pthread.h>
#include <cmath>
using namespace std;
#define cost 1000;//最初成本为1000元
int map[17][17];//商家与街道的平面图
int profit=-1000;//利润(初识的投入为1000元)
struct rider{
    int x=7,y=7;//骑手的初识位置
    int order_num[10];//骑手目前已接的单的序号
    int order_current=-1;//骑手目前在操作的单(无任务时默认为-1)
    rider *next=NULL;
};
struct order{
    int order_id;//单号
    int time_;
    int sell_x,sell_y;//商家位置
    int get_x,get_y;//顾客位置
    int dis=fabs(double(sell_x-get_x))+fabs(double(sell_y-get_y));//该单的距离
    int state_end=1;//订单的完成状态：1代表正常完成，0代表超时完成，-1代表未完成或者未接单。
    order *next=NULL;
};
typedef struct order *Order;
typedef struct rider *Rider;
int main(){
    int order_id,time,x_1,y_1,x_2,y_2;
    int order_num=0;//订单的初始数目为0
    int rider_num=0;//骑手的初始数目为0
    Order head_o=NULL;
    Rider head_h=NULL;
    while(scanf("%d%d%d%d%d%d",&order_id,&time,&x_1,&y_1,&x_2,&y_2)!=EOF){

        if(rider_num==0||)
    }
    return 0;
}