#include <iostream>
#include <cstring>

using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {cout<<"vogus..."<<endl;}
};

class CWHVideo : public CWH
{
    int videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is a amazing video with title: " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars." << endl;
        cout << "Length of this video is: " << videoLength << " out of 5 stars." << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is a amazing Text tutorial with title: " << title << endl;
        cout << "Ratings of this text tutorial : " << rating << " out of 5 stars." << endl;
        cout << "No of words of this video is: " << words << " out of 5 stars." << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for Code with harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djvideo(title, rating, vlen);
    // djvideo.display();

    // // for Code with harry Text
    title = "Django tutorial Text";
    words = 456;
    rating = 3.89;
    CWHText djText(title,rating,words);
    // djText.display();


    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}