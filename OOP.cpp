/* //Bai 15(lthdtbai15.cpp): Tinh dien tich va chu vi hinh tam giac co 3 canh a,b,c.

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

//===chuong trinh chinh===
int main()
{
    float a, b, c, cv, dt, p;

    //nhap
    do
    {
        cout<<"Nhap vao canh thu nhat: "; cin>>a;
        cout<<"Nhap vao canh thu hai: "; cin>>b;
        cout<<"Nhap vao canh thu ba: "; cin>>c;

        if(a+b<=c || a+c<=b || b+c<=a)
            cout<<"Dieu kien tam giac khong dung: Hay nhap lai:\n";
    }
    while(a+b<=c || a+c<=b || b+c<=a);

    //Tinh chu vi
    cv=a+b+c;

    //Tinh nua chu vi
    p=cv/2;

    //Tinh dien tich
    dt=sqrt(p*(p-a)*(p-b)*(p-c));

    //Hien thi ket qua
    printf("Chu vi hinh tam giac la: %0.2f", cv);
    printf("\nDien tich hinh tam giac la: %0.2f", dt);

     cout<< endl;
     return 0;
}
//===dinh nghia ham=== */



/* //Bai 15(lthdtbai15.cpp): Tinh dien tich va chu vi hinh tam giac co 3 canh a,b,c duoc doc tu tep.

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<fstream>
using namespace std;

//===chuong trinh chinh===
int main()
{
    float a, b, c, cv, dt, p;
    ifstream fin("tamgiac.txt");

    fin>>a;
    fin>>b;
    fin>>c;

    if(a+b<=c || a+c<=b || b+c<=a)
    {
         cout<<"Dieu kien tam giac khong dung: Hay nhap lai:\n";
    }
    else{

    //Tinh chu vi
    cv=a+b+c;

    //Tinh nua chu vi
    p=cv/2;

    //Tinh dien tich
    dt=sqrt(p*(p-a)*(p-b)*(p-c));

    //Hien thi ket qua
    printf("Chu vi hinh tam giac la: %0.2f", cv);
    printf("\nDien tich hinh tam giac la: %0.2f", dt);
    }
     cout<< endl;
     return 0;
}
//===dinh nghia ham=== */




/* //Bai: Tinh chu vi dien tich tam giac biet 3 canh a, b, c theo huong doi tuong

#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
//Khai bao lop
class HinhTG{
    private:
        float a;
        float b;
        float c;

    public:
        void nhap();
        float tinhDT();
        float tinhCV();
};

//===chuong trinh chinh===
int main()
{
    //Khai bao doi tuong htg
    HinhTG htg;

    //Nhap
    htg.nhap();

    //Hien thi ket qua
    printf("Dien tich hinh tam giac la: %0.2f", htg.tinhDT());
    printf("\nChu vi hinh tam giac la: %0.2f", htg.tinhCV());

     cout<< endl;
     return 0;
}
//===dinh nghia ham==
void HinhTG::nhap()
{
    do
    {
        cout<<"Nhap vao canh thu nhat: "; cin>>a;
        cout<<"Nhap vao canh thu hai: "; cin>>b;
        cout<<"Nhap vao canh thu ba: "; cin>>c;

        //Kiem tra dieu kien tam giac
        if(a+b<=c || a+c<=b || b+c<=a)
            cout<<"Dieu kien lap tam giac khong thoa man: Hay nhap lai:\n";
    }
        while(a+b<=c || a+c<=b || b+c<=a);
 }
//---------------------
float HinhTG::tinhDT()
{
    float p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
//-------------------------------
float HinhTG::tinhCV()
{
    return (a+b+c);
} */




/* //Bài 16(lthdtbai16.cpp): Đọc vào bán kính và màu nền (Xanh, Đỏ, Tím, Vàng) của n hình tròn
từ tệp văn bản "hinhtron.txt". Đưa ra màn hình bán kính, màu nền, diện tích và chu vi
của các hình tròn. Tính tổng diện tích và chu vi của n hình tròn.
Đếm số lượng hình tròn có nền màu Xanh, Đỏ, Tím, Vàng.


#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

//Khai bao lop
class Circle
{
    private:
        float r;
        char color[7];

    public:
        void setR(float r);
        void setColor(const char *color);
        void display();
        float getArea();
        float getPerimeter();
        int getColorCode();
};

//===chuong trinh chinh===
int main()
{

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void Circle::setR(float r)
{
    this->r=(r>0.0)?r:0.0;

}
//-----------------------
void Circle::setColor(const char *color)
{
    strcpy(this->color,color);

}
//---------------------------
void Circle::display()
{
    cout<<"Hinh tron ban kinh "<<r
        <<"va mau nen "<<color
        <<"co chu vi "<<getArea()
        <<", dien tich"<<getPerimeter()<<endl;
}
//-------------------------------
float Circle::getArea()
{
    return 3.14*r*r;
}
//---------------------------------------
float Circle::getPerimeter()
{
    return 2*3.14*r;
}
//----------------------------------------------
int Circle::getColorCode()
{
    if(!strcmp(color," Xanh"))
        return 0;
}
//----------------------------------------------------- */




/* //Bài 19(lthdtbai19.cpp): Cho điểm A(x1,y1) và điểm B(x2,y2). Tính khoảng cách AB.


#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

//Khai bao lop
class Point
{
    private:
        float x,y;

    public:
        Point();
        Point(float x,float y);
        float getDistance(const Point &P2);

        //Ham ban
        friend istream& operator>>(istream &cin,Point &P);
        friend ostream& operator<<(ostream &cout,Point &P);
};

//===chuong trinh chinh===
int main()
{
    //Tao 2 doi tuong diem
    Point A,B;

    cout<<"Nhập vào tọa độ điểm A:\n";
    cin>>A;
    cout<<"Nhập vào tọa độ điểm B:\n";
    cin>>B;

    cout<<"\nA"<<A;
    cout<<"\nB"<<B;
    printf("\nKhoảng cách AB = %0.1f",A.getDistance(B));

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
Point::Point():x(0),y(0)
{

}

Point::Point(float x,float y)
{
    this->x = x;
    this->y = y;
}

float Point::getDistance(const Point &P2)
{
    return sqrt((P2.x-x)*(P2.x-x) + (P2.y-y)*(P2.y-y));
}

//Ham ban
istream& operator>>(istream &cin,Point &P)
{
    char kt;

    cout<<"Nhập vào tọa độ dạng (x,y): ";
    cin>>kt>>P.x>>kt>>P.y>>kt;

    return cin;
}

ostream& operator<<(ostream &cout,Point &P)
{
    cout<<"("<<P.x<<","<<P.y<<")";

    return cout;
}
 



/* //Bài 21(lthdtbai21.cpp): Tính tổng 2 ma trận nguyên: Cmxn = Amxn + Bmxn. Ma trận Amxn để trong tệp văn bản 'matran-A.txt', ma trận Bmxn để trong tệp văn bản 'matran-B.txt'.
Đưa các ma trận ra màn hình theo định dạng hàng,cột.


#include<iostream>
#include<stdio.h>

using namespace std;
//Khai bao lop
class Matrix
{
    private:
        int m,n;
        int a[10][10];
    public:
        Matrix();
        Matrix operator+(const Matrix &mt2);

        //Ham ban
        friend ifstream& operator>>(ifstream &fin, Matrix &mt);
        friend ostream& operator<<(ostream &cout, Matrix &mt);
};

//===chuong trinh chinh===
int main()
{

     cout<< endl;
     return 0;
}
//===dinh nghia ham===

Matrix::Matrix()
{

}
Matrix Matrix::operator+(const Matrix &mt2)
{
    Matrix temp;
    int i,j;
        if(m!=mt2.m || n!=mt2.n)
        {
            cout<<"\nHai ma tran khong cung kich thuoc";
            return temp;
        }
        temp.m=m;
        temp.n=n;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                tem.a[i][j]=a[i][j]+mt2.a[i][j];
        return temp;
}
//Ham ban
ifstream& operator>>(ifstream &fin, Matrix &mt)
{
    int i,j;
    fin>>mt.m>>mt.n;
    for(i=0;i<mt.m;i++)
        for(int j=0;j<mt.n;j++)
            fin>>mt.a[i][j];
    return fin;
}

ostream& operator<<(ostream &cout, Matrix &mt)
{
    int i,j;
    for(i=0;i<mt.m;i++)
    {
        for(j=0;j<mt.n;j++)
            printf("%5d",mt.a[i][j];
        cout<<endl;
    }
    return cout;
} */



/* //Bai 27(lthdtbai27.cpp): Viet chuong trinh nhap vao danh sach n sinh vien, moi sinh vien co thong tin ve ma sinh vien, ten va diem tbc.
 Ma SV la cac so nguyen duoc lay tu dong co gia tri tu 11 tro di Dua ra man hinh so luong (khong dung n) va danh sach sinh vien da nhap. Yeu cau trong chuong trinh co su dung bien tinh va ham tinh; su dung mang doi tuong dong.


#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop
class SinhVien
{
    private:
        int maSV;
        char tenSV[31];
        float diemTB;

        //Bien cua lop
        static int stt;

    public:
        void nhap();
        void hienThi();

        //Ham cua lop
        static int laySL;
};

//===chuong trinh chinh===
int main()
{

     cout<< endl;
     return 0;
}
//===dinh nghia ham===
void SinhVien::nhap();
{
    mSV=++stt;

    //Nhap thong tin
    cout<<"/tNhap vao thong tin:"<maSV;
    cout<<"\n\tNhap ten sinh vien:"<teSV;
    cout<<"\tNhap vao diem trung binh cong:"; cin>>diemTB;
}
//-------------
void SinhVien::hienThi();
{
    cout<<"\tTen sinh vien: "<<tenSV;
    cout<<"\n\tMa sinh vien: "<<maSV;
    cout<<"\n\tDiem TBC: "<<diemTBC;
}
//------------------
int SinhVien::LaySL()
{
    return thuTu-10;
}
//------------------------- */



/* //Bài 29(lthdtbai29.cpp): Nhập vào một số nguyên dương, đưa ra số hex tương ứng.
Y/c trong chương trình có sử dụng ngăn xếp để chuyển từ số thập phân sang hex.
Ngăn xếp sử dụng cấu trúc lưu trữ phân tán.


#include<iostream>
#include<stdio.h>

using namespace std;
//Khai bao lop
class Stack()
{
    private:
        struct Node
        {
            int infor;
            Node *link;
        } *T;
    public:
        Stack();//Ham khoi tao
        Stack(const Stack &S)//ham sao chep
        ~Stack();//Ham huy
        Stack operator=(const Stack &S);//Ham chong toan tu gan
        void push(Type x);
        Type pop();
        bool isEmpty();
};
//===chuong trinh chinh===
int main()
{

     cout<< endl;
     return 0;
}
//===dinh nghia ham===
//Ham tao
Stack::Stack():T(NULL)
{

}
//Ham sao chep
Stack::Stack(const Stack &S)//ham sao chep
{

}
//Ham huy
Stack::~Stack()
{

}
//Ham chong toan tu gan
Stack::Stack operator=(const Stack &S)
{

}
void Stack::push(Type x)
{

}
Stack::Type pop()
{

}
bool Stack::isEmpty()
{

} */

/* //Bài 32(lthdtbai32.cpp): Cho tệp văn bản chứa dãy số nguyên "lthdtbai32-daysonguyen.txt",
trên tệp không có thông tin về số phần tử của dãy số. Đọc dãy số từ tệp văn bản,
lưu dãy số trong danh sách liên kết đơn theo đúng thứ tự trên tệp. Đưa dãy số trong DSLKD ra màn hình.
Tìm xem trong dãy số có phần tử nào bằng x không. Xóa một phần tử có giá trị bằng x.

#include<iostream>
#include<stdio.h>
#include<stdio.h>

using namespace std;

//Khai bao lop
class SList
{
    private:
        struct node
        {
            int infor;
            node *link;
        } *F;

    public:

        Slist();
        ~Slist();
        void lastInsert(int x);
        void show();
        bool search(int x);
        bool remove(int x);
};

//===chuong trinh chinh===
int main()
{

     cout<< endl;
     return 0;
}
//===dinh nghia ham===

SList::SList():F(NULL)
{

}

SList::~SList()
{
    while(F)
    {
        node *p=F;
        F=F->link;
        remove P;
    }
}

void SList::lastInsert(int x)
{
    //1.Tao nut moi
    node *N = new node;
    N->infor = x;
    N->link = NULL;

    //2.Noi nut moi vao cuoi DSLKD
    if(F==NULL)
    {
        F=N;
    }
    else
    {
        //Tim den nut cuoi danh sach
        node *P = F;
        while(P->link) P = P->link;

        //Noi nut moi vao sau nut cuoi
        p->link = N;

    }
}

void SList::show()
{
    node *P=F;
    while(P)
    {
        cout<<P->infor<<" ";
        P=P->link;
    }

}

bool Slist::search(int x)
{
    node *P=F;

    //Tim nut co phan tu bang x
    while(P)
    {
        if(P->infor==x0 return 1;
        else P=P->link;
    }
    //Truong hop khong thay
    return 0;
}

bool SList::remove(int x)
{
    //1.Tim nut M co phan tu bang x
    node *M=f;
    while(M)
    {
        if(M->infor==x) break;
        else M=M->link;
    }

    //2.Xoa nut M
    if(M)
    {
        if(M==F)
        {
            F=F->link;
        }
        else
        {
            //Tim den nut P dung truoc M
            node *P=F;
            while(P->link!=M) P=P->link;

            //Noi nut truoc M voi nut sau M
        }
    }
} */



/* //Tính diện tích các hình: Hình tam giác biết 3 cạnh a,b,c; hình chữ nhật biết 2 cạnh a,b;
hình tròn biết bán kính r; hình trụ biết bán kính r và chiều cao h. Nhập vào một số hình.
Đưa ra diện tích các hình đã nhập. Yêu cầu cài đặt đa hình động.

#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

//Khai bao lop
class Shape
{
    private:

    public:
        virtual void input()=0;
        virtual float getArea()=0;
};

class Triangle:public Shape
{
    private:
        float a,b,c;

    public:
        void input();
        float getArea();
};

class Rectangle:public Shape
{
    private:
        float a,b;

    public:
        void input();
        float getArea();
};

class Circle:public Shape
{
    private:
        float r;

    public:
        void input();
        float getArea();
        float getPerimeter();
};

class Cylinder:public Circle
{
    private:
        float h;

    public:
        void input();
        float getArea();
};

//===chuong trinh chinh===
int main()
{
    Shape *list[50];
    int n=0;
    char answer1,answer2;

    do
    {
        cout<<"Nhập kích thước cho hình nào (1-TG,2-CN,3-TRON,4-TRU): ";
        cin>>answer1;

        //Tao doi tuong hinh tuong ung voi lua chon cua nguoi dung
        switch(answer1)
        {
            case '1':
                list[n] = new Triangle;
                break;

            case '2':
                list[n] = new Rectangle;
                break;

            case '3':
                list[n] = new Circle;
                break;

            case '4':
                list[n] = new Cylinder;
                break;

            default:
                list[n] = new Triangle;
        }

        //Nhap kich thuoc hinh da chon
        list[n++]->input(); //Da hinh dong

        //Hoi co nhap nua ko
        cout<<"\nCó nhập tiếp không(c/k)? ";
        cin>>answer2;
    }
    while(answer2=='c');

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void Triangle::input()
{
     do
     {
         cout<<"\nNhập vào 3 cạnh của tam giác: ";
         cin>>a>>b>>c;

         if(a+b<=c || b+c<=a || a+c<=b)
             cout<<"\nBa cạnh nhập vào không tạo thành tam giác. Xin mời nhập lại!\n";
     }
     while(a+b<=c || b+c<=a ||a+c<=b);
 }

float Triangle::getArea()
{
     float p=(a+b+c)/2;
     return sqrt(p*(p-a)*(p-b)*(p-c));
}

void Circle::input()
{
     cout<<"\nNhập vào bán kính của hình tròn: ";
     cin>>r;
}

float Circle::getArea()
{
     return 3.14*r*r;
}

float Circle::getPerimeter()
{
     return 2*3.14*r;
}

void Cylinder::input()
{
    Circle::input();
    cout<<"\nNhập vào chiều cao h: ";
    cin>>h;
}

float Cylinder::getArea()
{
     return Circle::getArea()*2 + Circle::getPerimeter()*h;
} */



/* //Viết chương trình tính thể tích và diện tích bề mặt của hình trụ có bán kính r và chiều cao h. Biết rằng hình trụ là 1 loại hình tròn có bán kính r được kéo dài với chiều cao h.
#include<iostream>
#include<stdio.h>
#include<fstream>
//Khai bao class
class Circle
{
    private:
        float r;
    public:
        void input();
        float getArea();
        float getPerimeter();
};

class Cylinder:public Circle
{
    private:
        float h;

    public:
        void input();
        float getArea();
        float getVolume();
};
using namespace std;

//===chuong trinh chinh===
int main()
{
    Cylinder C1;

    C1.input();

    printf("Diện tích hình trụ là: %0.1f",C1.getArea());

     cout<< endl;
     return 0;
}
//===dinh nghia ham===

void Circle::input()
{
     cout<<"Nhập vào bán kính hình tròn:";
     cin>>r;
}
float Circle::getArea()
{
    return 3.14 * r * r;
}
float Circle::getPerimeter()
{
    return 2 * 3.14 * r;

}
//---------------------------------
void Cylinder::input()
{
    cout<<"Nhập vào chiều cao hình trụ";
    cin>>h;
}
float Cylinder::getArea()
{
    return Circle::getPerimeter() * h + 2 * Circle::getArea();
}
float Cylinder::getVolume()
{
    return Circle::getArea() * h;
} */


/* //De:Cho tep van ban 'daysonguyen.txt' chua day so nguyen co n phan tu. Doc day so nguyen vao mang dong. Sap xep day so tang dan theo giai thuat sap xep chon. Yc viet ham sap xep day so duoc truyen vao qua doi so la mang.

#include<iostream>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>

using namespace std;
//Khai báo hàm
void hienThi(int *a, int n); //Hàm hiển thi dãy số
void selectionSort(int *a, int n); //Hàm sắp xếp dãy số theo giải thuật sắp xếp chọn

//===chuong trinh chinh===
int main()
{
    int *a;
    int n, x;
    //Khai báo tệp vào
    ifstream fin("daysonguyen.txt");

    fin>>n;

    //khởi tạo mảng động
    a=new int[n];

    //Đọc dãy số
    for(int i=0;i<n;i++)
    {
        fin>>x;
        a[i]=x;
    }
    //Hiển thị dãy số chứa sắp xếp
    cout<<"Day so doc vao tu tep la:\n";
    hienThi(a,n);

    //Sắp xếp
    selectionSort(a,n);

    //Hiển thị dãy số đã sắp xếp
    cout<<"\n\nDay so sau khi sap xep tang dan la :\n";
    hienThi(a,n);

    //Hủy mảng
    delete [] a;

    cout<< endl;
    return 0;
}
//===dinh nghia ham==
void hienThi(int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%-5d",a[i]);
    }
}

void selectionSort(int *a,int n) //Hàm sắp xếp dạy số theo giải thuật sắp xếp chọn
{
    int i, j, k, tg;

    for(i=0; i<n-1; i++)
    {
        //Tìm phần tử nhỏ nhất ở vị trí k
        k=i;
        for(j=i+1; j<n; j++)
            if(a[j]<a[k])
                k=j;

        //Đổi chỗ phần tử nhỏ nhất k cho phần tử i
        if(k!=1)
        {
            tg=a[k];
            a[k]=a[i];
            a[i]=tg;
        }
    }
} */



/* //De: Ứng dụng mẫu lớp ngăn xếp lưu trữ kế tiếp chuyển số nguyên dương hệ 10 sang hệ 2 và hệ 16

#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao mau lop ngan xep
template <class Type>
class Stack
{
    private:
        enum {size=32};
        Type S[size];
        int T;

    public:
        Stack(); //Ham tao
        void push(Type x);
        Type pop();
        bool isEmpty();
};
//===chuong trinh chinh===
int main()
{
    //Tao mot doi tuong ngan xep co kieu phan tu la so nguyen
    Stack<int> S1;

    //Tao mot doi tuong ngan xep co kieu phan tu la ky tu
    Stack<char> S2;

    //Khai bao bien
    int n,thuong,du;

    cout<<"Nhập vào một số nguyên dương: ";
    cin>>n;

    //Chuyen sang he 2
    thuong=n;
    while(thuong)
    {
        S1.push(thuong%2);
        thuong/=2;
    }

    cout<<"\nSố nhị phân của "<<n<<" là: ";
    while(!S1.isEmpty()) cout<<S1.pop();

    //Chuyen sang he 16
    thuong=n;
    while(thuong)
    {
        du=thuong%16;
        thuong/=16;
        //Chuyen so du thanh ky tu chu so he 16
        if(du<10) S2.push(du+48);
        else S2.push(du+55);
    }

    cout<<"\nSố hệ 16 của "<<n<<" là: ";
    while(!S2.isEmpty()) cout<<S2.pop();

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
template <class Type>
Stack<Type>::Stack():T(-1)
{

}

template <class Type>
void Stack<Type>::push(Type x)
{
    //Kiem tra ngan xep day
    if(T==size-1)
    {
        cout<<"Ngăn xếp đã đầy!";
        return;
    }

    //Dua x vao ngan xep
    S[++T] = x;
}

template <class Type>
Type Stack<Type>::pop()
{
    //Kiem tra ngan xep rong
    if(T == -1)
    {
        cout<<"Ngăn xếp đã rỗng!";
        Type tmp;
        return tmp;
    }

    //Tra ve phan tu dinh va giam T di 1
    return S[T--];
}

template <class Type>
bool Stack<Type>::isEmpty()
{
    return T==-1;
} */



/* //De: Tinh tong 2 so phuc

#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop
class SoPhuc
{
    private:
        float a,b;

    public:
        void nhap();
        void hien();
        SoPhuc cong(const SoPhuc &p2);
};

//===chuong trinh chinh===
int main()
{
    //Tao 3 doi tuong so phuc
    SoPhuc p1,p2,tong;

    //Tuong tac
    cout<<"Nhập vào số phức p1:\n";
    p1.nhap();

    cout<<"Nhập vào số phức p2:\n";
    p2.nhap();

    //Tinh tong
    tong = p1.cong(p2);

    //Dua ra cac so phuc
    cout<<"\nSố phức p1 = ";p1.hien();
    cout<<"\nSố phức p2 = ";p2.hien();
    cout<<"\nSố phức p1 + p2 = ";tong.hien();

    cout<<endl;
    return 0;
}

//===dinh nghia ham===
void SoPhuc::nhap()
{
    cout<<"Nhập vào phần thực: ";cin>>a;
    cout<<"Nhập vào phần ảo: ";cin>>b;
}

void SoPhuc::hien()
{
    if(b>=0) cout<<a<<" + j"<<b;
    else cout<<a<<" - j"<<-b;
}

SoPhuc SoPhuc::cong(const SoPhuc &p2)
{
    SoPhuc tg;

    tg.a = a + p2.a;
    tg.b = b + p2.b;

    //Tra ve so phuc tong
    return tg;
} */



/* //De: Tinh tong 2 so phuc su dung chong toan tu

#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop
class SoPhuc
{
    private:
        float a,b;

    public:
        SoPhuc operator+(const SoPhuc &p2);

        //Ham ban
        friend istream& operator>>(istream &cin,SoPhuc &p);
        friend ostream& operator<<(ostream &cout,SoPhuc &p);
};

//===chuong trinh chinh===
int main()
{
    //Tao 3 doi tuong so phuc
    SoPhuc p1,p2,tong;

    //Tuong tac
    cout<<"Nhập vào số phức p1:\n";
    cin>>p1;

    cout<<"Nhập vào số phức p2:\n";
    cin>>p2;

    //Tinh tong
    tong = p1 + p2;

    //Dua ra cac so phuc
    cout<<"\nSố phức p1 = "<<p1;
    cout<<"\nSố phức p2 = "<<p2;
    cout<<"\nSố phức p1 + p2 = "<<tong;

    cout<<endl;
    return 0;
}

//===dinh nghia ham===
SoPhuc SoPhuc::operator+(const SoPhuc &p2)
{
    SoPhuc tg;

    tg.a = a + p2.a;
    tg.b = b + p2.b;

    //Tra ve so phuc tong
    return tg;
}

//Ham ban
istream& operator>>(istream &cin,SoPhuc &p)
{
    cout<<"Nhập vào phần thực: ";cin>>p.a;
    cout<<"Nhập vào phần ảo: ";cin>>p.b;

    return cin;
}

ostream& operator<<(ostream &cout,SoPhuc &p)
{
    if(p.b>=0) cout<<p.a<<" + j"<<p.b;
    else cout<<p.a<<" - j"<<-p.b;

    return cout;
} */



/* //De: Nhập vào một họ tên có cả họ, tên đệm và tên. Lấy tách riêng ra họ, tên đệm và tên để trong các biến xâu động. Biết rằng họ, tên chỉ có một từ; trong họ tên, giữa các từ chỉ cách nhau 1 dấu cách. Đưa ra màn hình theo từng dòng họ tên, họ, tên đệm và tên. Yc trong chương trình có dùng con trỏ char.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//Khai báo hàm
    void layTen(char *s);
    void layHoTen(char *HoDem, char *HoTen);
//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    char hoTen[36];
    char *p,*ho,*tenDem,*ten;
    int num;

    cout<<"Nhập vào họ tên: ";
    scanf(" ");cin.get(hoTen,sizeof(hoTen));

    //Cho p tro toi ky tu cuoi cung cua ho ten
    p = hoTen + strlen(hoTen) - 1;

    //Cho p tro toi ky tu dau tien cua ten
    while(*p != ' ') p--;
    p++;

    //Tao bien xau dong ten
    ten = new char[strlen(p)+1];

    //Copy ten
    strcpy(ten,p);

    //Dem so ky tu cua ho
    num = 0;
    p = hoTen;
    while(*p != ' ')
    {
        num++; p++;
    }

    //Tao bien xau dong ho
    ho = new char[num+1];

    //Copy num ky tu cua ho
    strncpy(ho,hoTen,num);

    //Them ky tu rong vao ho
    ho[num] = '\0';

    cout<<"Tên: "<<ten;
    cout<<"\nHọ: "<<ho;

    cout<<endl;
    return 0;
}
//===dinh nghia ham=== */

