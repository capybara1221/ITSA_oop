//
//  main.cpp
//  itsa_c++
//
//  Created by 鄭莛頤 on 2024/6/25.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <iomanip>
#include <vector>
using namespace std;

// 45
// C_MM12-易: 相遇時間計算
/*int main()
{
    float e = 100-(30*2.54);
    int d;
    
    while( !cin.eof() && cin >> d)
    {
        cout << ceil((d*100)/e) << "\n";
    }
}*/

// 44
// C_MM11-易: 購票計算
/*int main()
{
    int in;
    cin >> in;
    cout << "NT10=" << in/10 << "\n";
    in -= (in/10)*10 ;
    cout << "NT5=" << in/5 << "\n";
    in -= (in/5)*5;
    cout << "NT1=" << in << "\n";
}*/

// 43
// C_MM10-易: 攝氏溫度轉華式溫度
/*int main()
{
    float in;
    while( !cin.eof() && cin >> in)
    {
        cout << fixed << setprecision(1) << (in*9/5)+32 << "\n";
    }
}*/

// 42
// C_MM09-易: 計算 i 次方的值
/*int func(int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 2;
    
    return 2*func(n-1);
}

int main()
{
    int in;
    cin >> in;
    if(in <=31)
        cout << func(in) << "\n";
    else
        cout << "Value of more than 31" << "\n";
}*/

// 41
// C_MM08-易: 計算兩數和的平方值
/*int main()
{
    int a, b;
    cin >> a >> b;
    cout << (a+b)*(a+b) << "\n";
}*/

// 40
// C_MM07-易: 計算平方值與立方值
/*int main()
{
    int in;
    while ( !cin.eof() && cin >> in)
    {
        cout << in << " " << in*in << " " << in*in*in << "\n";
    }
}*/

// 39
// C_MM06-易: 英哩轉公里
/*int main()
{
    int in;
    while ( !cin.eof() && cin >> in)
    {
        cout << fixed << setprecision(1) << round(in*1.6*10)/10 << "\n";
    }
}*/

// 38
// C_MM05-易: 計算正方形面積
/*int main()
{
    double in;
    while ( !cin.eof() && cin >> in)
    {
        cout << fixed << setprecision(1) <<round(in*in*10)/10 << "\n";
    }
}*/


// 37
// C_MM03-易: 兩數總和
/*int main()
{
    int in1, in2;
    while( !cin.eof() && cin >> in1 >> in2)
    {
        cout << in1+in2 << "\n";
    }
}*/

// 36
// C_MM02-易: 計算三角形面積
/*int main()
{
    float d, h;
    while( !cin.eof() && cin >> d >> h)
    {
        cout << fixed << setprecision(1) << (d*h)/2 << "\n";
    }
}*/

// 35
// C_MM01: 計算梯型面積
/*int main()
{
    float u, d, h;
    while( !cin.eof() && cin >> u >> d >> h)
    {
        cout << "Trapezoid area:" << fixed << setprecision(1) << (u+d)*h/2 << "\n";
    }
}*/

// 34
// C_AR145: What is the Median?
/*int main(void)
{
    float in[10];
    for(int i=0;i<10;i++)
        cin >> in[i];
    
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            if(in[j]>in[j+1])
            {
                int tmp=in[j];
                in[j]=in[j+1];
                in[j+1]=tmp;
            }
        }
    }
    
    for(int i=0;i<10;i++)
    {
        cout << fixed << setprecision(0) << in[i];
        if(i<9)
            cout << " ";
        else
            cout << "\n";
    }
    cout << "Median:" << fixed << setprecision(2) << (in[4]+in[5])/2 << "\n";
}*/

// 33
// C_AR72: 電影票購買計算
/*int main(void)
{
    int n=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int f,h;
        cin >> f >> h;
        cout << f*250+h*175 << "\n";
    }
}*/

// 32
// C_AR82: 不同百比例的成績計算
/*int main(void)
{
    int q,n;
    cin >> q >> n;
    
    float rate[q];
    for(int i=0;i<q;i++)
        cin >> rate[i];
    
    float ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            int tmp;
            cin >> tmp;
            ans+=tmp*rate[j];
        }
    }
    
    cout << fixed << setprecision(2) << ans/n << "\n";
}*/

// 31
// C_AR77: 二維陣列反轉
/*int main(void)
{
    int row,col;
    cin >> row;
    cin >> col;
    
    int m[row][col],c=row*col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << c;
            c--;
            if(j<col-1)
                cout << " ";
            else
                cout << "\n";
        }
    }
    
}*/

// 30
// C_AR47: 利用指標傳遞陣列到函數
/*void reverse(int in[10],int rev[10])
{
    for(int i=0;i<10;i++)
    {
        rev[9-i]=in[i];
    }
}

int main(void)
{
    int in[10],rev[10];
    for(int i=0;i<10;i++)
        cin >> in[i];
    
    reverse(in,rev);
    
    for(int i=0;i<10;i++)
    {
        cout << rev[i];
        
        if(i<9)
            cout << " ";
        else
            cout << "\n";
    }
}*/

// 29
// C_AR44: 迴文問題
/*int main(void)
{
    char in[1000],in2[1000];
    cin >> in;
    strcpy(in2,in);
    
    unsigned long len=strlen(in);
    int ans=0;
    for(int i=0;i<len;i++)
    {
        if(in[i] != in[len-i-1])
        {
            ans++;
            break;
        }
    }
    
    if(ans!=0)
        cout << "NO\n";
    else
        cout << "YES\n";
    
}*/

// 27
// C_AR023: 字根與子字串
/*int main(void)
{
    char in1[101],in2[101];
    cin >> in1;
    cin >> in2;
    
    if(strstr(in2,in1)!=NULL)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}*/

// 26
// C_AR022: 字母出現的頻率
/*int main()
{
    char in;
    vector<int> alpha(26, 0);

    while (true) 
    {
        in = cin.get();
        if (cin.eof())
        {
            break;
        }
        if (isalpha(in))
        {
            if (!islower(in)) 
            {
                in = tolower(in);
            }
            alpha[in - 'a']++;
        }
    }

    for (int i = 0; i < 26; ++i) 
    {
        cout << alpha[i];
        if (i < 25) 
        {
            cout << " ";
        } 
        else
        {
            cout << endl;
        }
    }

}*/

// 28
// C_AR021: 成績統計
/*int main(void)
{
    int n;
    cin >> n;
    
    float grade[n][3];
    float total=0,totalC=0,totalE=0,totalM=0;
    for(int i=0;i<n;i++)
    {
        cin >> grade[i][0] >> grade[i][1] >> grade[i][2];
        total+=(grade[i][0]+grade[i][1]+grade[i][2]);
        totalC+=grade[i][0];
        totalE+=grade[i][1];
        totalM+=grade[i][2];
    }
    
    cout << fixed << setprecision(1) << total/(n*3) << " " << fixed << setprecision(1) << totalC/n << " " << fixed << setprecision(1) << totalE/n << " " << fixed << setprecision(1) << totalM/n << "\n";
}*/

// 25
// C_AR20: 檢查數值是否有重複
/*int main(void)
{
    int n;
    cin >> n;
    
    int in[n],ans=0;
    int *arr = new int[n+1];
    
    for(int i=0;i<n;i++)
    {
        cin >> in[i];
        arr[in[i]]++;
        if(arr[in[i]]>1 && ans==0)
        {
            cout << "0\n";
            ans++;
        }
    }
    
    if(ans==0)
        cout << "1\n";
}*/

// 24
// 基礎題目37： 18啦遊戲設計
/*int main(void)
{
    int die[6]={0};
    int in[4],max=0,num=0;
    
    for(int i=0;i<4;i++)
    {
        scanf("%d",&in[i]);
        die[in[i]-1]++;
        if(die[in[i]-1]>max)
            max=die[in[i]-1];
    }
    
    if(max==1 || max==3)
        printf("R\n");
    else if(max==4)
    {
        printf("WIN\n");
    }
    else
    {
        int ans=0,one=0,two=0,sum[2]={0};
        for(int i=0;i<6;i++)
        {
            //printf("in[%d]: %d\n",i,in[i]);
            if(die[i]==1)
            {
                ans+=(i+1);
                one++;
            }
            if(die[i]==2)
            {
                two=i;
                //printf("%d\n",two);
            }
        }
        if(one!=0)
            printf("%d\n",ans);
        else
        {
            printf("%d\n",(two+1)*2);
        }
    }
    
}*/

// 23
// 基礎題目39： 考試測驗
/*int main(void)
{
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++)
    {
        int in1,in2,in3;
        cin >> in1 >> in2 >> in3;
        
        int grade[3]={in1,in2,in3};
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2-i;j++)
            {
                if(grade[j]>grade[j+1])
                {
                    int tmp=grade[j];
                    grade[j]=grade[j+1];
                    grade[j+1]=tmp;
                }
            }
        }
        
        if(grade[0]>=60)
        {
            cout << "P\n";
        }
        else if((grade[0]<60 && grade[1]>=60) && (grade[0]+grade[1]+grade[2]>=220))
        {
            cout << "P\n";
        }
        else if((grade[0]<60 && grade[1]>=60) && (grade[0]+grade[1]+grade[2]<220))
        {
            cout << "M\n";
        }
        else if((grade[0]<60 && grade[1]<60 && grade[2]>=60) && grade[2]>=80)
        {
            cout << "M\n";
        }
        else
            cout << "F\n";
        
    }
}*/

// 22
// 基礎題目38： 計算電費
/*int main(void)
{
    int in;
    float sum=0,sum2=0;
    cin >> in;

    float in2=in;
    
    if(in>=701)
    {
        int tmp=in-700;
        sum+=tmp*5.63;
        in=700;
    }
    if(in>=501 && in<701)
    {
        int tmp1=in-500;
        sum+=tmp1*4.97;
        in=500;
    }
    if(in>=331 && in<501)
    {
        int tmp2=in-330;
        sum+=tmp2*4.39;
        in=330;
    }
    if(in>=121 && in<331)
    {
        int tmp3=in-120;
        sum+=tmp3*3.02;
        in=120;
    }
    if(in<121)
    {
        sum+=in*2.10;
    }
    
    if(in2>=701)
    {
        int tmp=in2-700;
        sum2+=tmp*4.50;
        in2=700;
    }
    if(in2>=501 && in2<701)
    {
        int tmp1=in2-500;
        sum2+=tmp1*4.01;
        in2=500;
    }
    if(in2>=331 && in2<501)
    {
        int tmp2=in2-330;
        sum2+=tmp2*3.61;
        in2=330;
    }
    if(in2>=121 && in2<331)
    {
        int tmp3=in2-120;
        sum2+=tmp3*2.68;
        in2=120;
    }
    if(in2<121)
    {
        sum2+=in2*2.10;
    }
    
    cout << fixed << "Summer months:" << setprecision(2) << sum << "\n";
    cout << fixed << "Non-Summer months:" << setprecision(2) << sum2 << "\n";
}*/

// 21
// 基礎題目36： 平、閏年判定
/*int main(void)
{
    int y;
     while( !cin.eof() && cin >> y)
    {
        if(y%400 == 0)
        {
            cout << "Bissextile Year\n";
        }
        else if(y%100 == 0)
        {
            cout << "Common Year\n";
        }
        else if(y%4 == 0)
        {
            cout << "Bissextile Year\n";
        }
        else
        {
            cout << "Common Year\n";
        }
    }
}*/

// 20
// 基礎題目34： 標準體重計算
/*int main(void)
{
    int h,g;
    while( !cin.eof() && cin >> h >> g)
    {
        if(g==1)
        {
            cout << fixed << setprecision(1) << (h-80)*0.7 << "\n";
        }
        else
            cout << fixed <<setprecision(1) << (h-70)*0.6 << "\n";
    }
}*/

// 19
// 基礎題目30： 星座查詢
/*int main(void)
{
    char s[12][12]={"Aquarius","Pisces","Aries","Taurus","Gemini","Cancer","Leo","Virgo","Libra","Scorpio","Sagittarius","Capricorn"};
    int m[13][3]={{0,0,0},{21,11,0},{19,0,1},{21,1,2},{21,2,3},{22,3,4},{22,4,5},{23,5,6},{24,6,7},{24,7,8},{24,8,9},{23,9,10},{22,10,11}};
    int month,date;
    cin >> month >> date;
    if(date<m[month][0])
    {
        cout << s[m[month][1]] << "\n";
    }
    else
        cout << s[m[month][2]] << "\n";
    
}*/

// 18
// 基礎題目23： 找零錢問題
/*int main(void)
{
    int N,a1,a2,a3;
    char t1,t2,t3;
    cin >> N >> t1 >> a1 >> t2 >> a2 >> t3 >>a3;
    
    int total=a1*15+a2*20+a3*30;
    if(total>N)
        cout << "0\n";
    else
    {
        int re=N-total,ans1=0,ans2=0,ans3=0;
        ans1=re/50;
        re%=50;
        ans2=re/5;
        re%=5;
        ans3=re;
        cout << ans3 << "," << ans2 << "," << ans1 << "\n";
    }
}*/

// 17
// C_AR44: 迴文問題
/*int main(void)
{
    char in[100];
    
    while( !cin.eof() && cin >> in)
    {
        unsigned long len=strlen(in);
        char rev[len+1];
        int ans=0;
        for(int i=0;i<len;i++)
        {
            rev[i]=in[len-i-1];
        }
        
        for(int i=0;i<len;i++)
        {
            if(rev[i]!=in[i])
            {
                ans++;
                break;
            }
        }
        if(ans==0)
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }
}*/

// 16
// 基礎題目12： 遞迴程式練習
/*int func(int n)
{
    if(n==0 || n==1)
        return n+1;
    return func(n-1)+func(ceil(n/2));
}

int main(void)
{
    int n;
    cin >> n;
    
    cout << func(n) << "\n";
}*/

// 15
// 基礎題目11： 矩陣反轉
/*int main(void)
{
    int r,c;
    while( !cin.eof() && cin >> r >> c)
    {
        
        int in[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin >> in[i][j];
            }
        }
        
        int out[c][r];
        
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<r;j++)
            {
                out[i][j]=in[j][i];
            }
        }
        
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<r;j++)
            {
                cout << out[i][j];
                if(j!=r-1)
                    cout << " ";
            }
            cout << "\n";
        }
    }
}*/

// 14
// 基礎題目10： 輾轉相除法
/*int fnc(int a,int b)
{
    if(a<b)
        return fnc(b,a);
    if(a%b==0)
        return b;
    
    return fnc(b,a%b);
}

int main(void)
{
    int a,b;

    while( !cin.eof() && cin >> a >> b)
    {
        int ans=fnc(a,b);
        cout << ans << "\n";
    }
}*/

// 13
// 基礎題目9： 計算正整數被3整除之數值之總和
/*int main(void)
{
    int n;
    while( !cin.eof() && cin >> n)
    {
        int tmp=0,ans=0;
        while(tmp<n)
        {
            tmp+=3;
            if(tmp<=n)
                ans+=tmp;
        }
        cout << ans << "\n";
    }
}*/

// 12
// 基礎題目6： 質數判別
/*int main(void)
{
    int n;
    while( !cin.eof() && cin >> n)
    {
        int ans=0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                ans++;
                break;
            }
        }
        if(ans==0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}*/

// 11
// 基礎題目6： 季節判定
/*int main(void)
{
    int in;
    while( !cin.eof() && cin >> in)
    {
        if(in>=3 && in<=5)
            cout << "Spring\n";
        if(in>=6 && in<=8)
            cout << "Summer\n";
        if(in>=9 && in<=11)
            cout << "Autumn\n";
        if(in==12 || in==1 || in==2)
            cout << "Winter\n";
    }
}*/

// 10
// 基礎題目4： 停車費計算
/*int main(void)
{
    int h1,m1,h2,m2;
    cin >> h1 >> m1;
    cin >> h2 >> m2;
    
    int t1=h1*60+m1,t2=h2*60+m2,totalT=t2-t1,ans=0;
    
    if(totalT>240)
    {
        ans+=(totalT-240)/30*60;
        totalT=240;
    }
    if(totalT>120 && totalT<=240)
    {
        ans+=(totalT-120)/30*40;
        totalT=120;
    }
    if(totalT<=120)
    {
        ans+=(totalT)/30*30;
    }
    
    cout << ans << "\n";
}*/


// 9
// 基礎題目3： 判斷座標是否在圓形的範圍內
/*int main(void)
{
    int x,y,r=200;
    while(!cin.eof() && cin >> x >> y)
    {
        if((x*x+y*y)<=40000)
            cout << "inside\n";
        else
            cout << "outside\n";
    }
}*/

/*int main(void)
{
    int d=0;
    scanf("%d",&d);
    printf("%c %d",d,d);
    char in[5];
    scanf("%c %c %c %c %c",&in[0],&in[1],&in[2],&in[3],&in[4]);
    
    int ans=0;
    for(int i=0;i<5;i++)
    {
        if(in[i]<=90 && in[i]>=65)
        {
            if(in[i]=='A')
                ans+=14;
            if(in[i]=='J')
                ans+=11;
            if(in[i]=='Q')
                ans+=12;
            if(in[i]=='K')
                ans+=13;
        }
        else
            ans+=(in[i]-48);
        
        printf("%d\n",ans);
    }
    
    printf("%d\n",ans);
}*/

// 8
// C_AR63: 矩陣相加
/*int main(void)
{
    int r1,c1,r2,c2;
    
    cin >> r1 >> c1;
    
    int m1[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin >> m1[i][j];
        }
    }
    
    cin >> r2 >> c2;
    
    int m2[r2][c2];
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin >> m2[i][j];
        }
    }
    
    int out[r1][c1];
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            out[i][j]=0;
        }
    }
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            out[i][j]=m1[i][j]+m2[i][j];
        }
    }
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout << out[i][j];
            if(j!=c1-1)
                cout << " ";
        }
        cout << "\n";
    }
}*/

// 7
// C_AR62: 矩陣相乘
/*int main(void)
{
    int r1,c1,r2,c2;
    
    cin >> r1 >> c1;
    
    int m1[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin >> m1[i][j];
        }
    }
    
    cin >> r2 >> c2;
    
    int m2[r2][c2];
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin >> m2[i][j];
        }
    }
    
    int out[r1][c2];
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            out[i][j]=0;
        }
    }
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                out[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout << out[i][j];
            if(j!=c2-1)
                cout << " ";
        }
        cout << "\n";
    }
    
}*/

// 6
// C_AR54: 小寫字元計算
/*int main() 
{
    int n;
    cin >> n;
 
    vector<int> arr(26, 0);
 
    // Clear newline character left in the buffer
    cin.ignore();
 
    for (int i = 0; i < n; ++i) 
    {
        char tmp;
        cin >> tmp;
 
        // Check if the character is a lowercase letter
        if (tmp >= 'a' && tmp <= 'z') 
        {
            arr[tmp - 97]++;
        }
 
        // Clear any remaining characters in the line
        cin.ignore();
    }
 
    for (int i = 0; i < 26; ++i) 
    {
        if (arr[i] != 0) 
        {
            std::cout << static_cast<char>(i + 97) << ' ' << arr[i] << std::endl;
        }
    }
 
    return 0;
}*/

/*void bubble_sort(int arr[], int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 5
// C_AR53: 學生成績排序
int main(void)
{
    int n;
    cin >> n;
    
    int grade[n];
    for(int i=0;i<n;i++)
        cin >> grade[i];
    
    bubble_sort(grade,n);
    
    for(int i=0;i<n;i++)
    {
        cout << grade[i] << "\n";
    }
}*/

// 4
// C_AR10: 新通話費率
/*int main(void)
{
    int type,time,r = 0;
    char comma;
    cin >> type >> comma >> time;
    
    float rate[4]={0.09,0.08,0.07,0.06},over1[4]={0.9,0.8,0.7,0.6},over2[4]={0.8,0.7,0.6,0.5};
    
    if(type==186)
        r=0;
    if(type==386)
        r=1;
    if(type==586)
        r=2;
    if(type==986)
        r=3;
    
    float total= time*rate[r];
    
    if(total<=type)
        cout << type << "\n";
    else if(total<=type*2)
        cout << fixed << setprecision(0) << (total*over1[r]) << "\n";
    else
        cout << fixed << setprecision(0) << (total*over2[r]) << "\n";
    
}*/

// 3
// C_AR05: 最少派車數
/*int main(void)
{
    int n;
    cin >> n;
    
    int *a = new int[25]();
   
    int max=0;
    for(int i=0;i<n;i++)
    {
        int s,d;
        cin >> s >> d;
        for(int j=s;j<=d-1;j++)
        {
            a[j]++;
            if(a[j]>max)
                max=a[j];
        }
    }
    
    cout << max << "\n";
}*/

// 2
// C_AR02:  一維陣列反轉 II
/*int main(void)
{
    int in[6];
    
    cin >> in[0] >> in[1] >> in[2] >> in[3] >> in[4] >> in[5] ;
    cout << in[5] << " " << in[4] << " " << in[3] << " " << in[2] << " " << in[1] << " " << in[0] << "\n";
    
}*/

// 1
// C_AR03: 計算陣列中所有元素的立方和
/*int main(void)
{
    int in[6];
    
    cin >> in[0] >> in[1] >> in[2] >> in[3] >> in[4] >> in[5];
    cout << in[0]*in[0]*in[0]+in[1]*in[1]*in[1]+in[2]*in[2]*in[2]+in[3]*in[3]*in[3]+in[4]*in[4]*in[4]+in[5]*in[5]*in[5] << "\n";
    
}*/
