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
    virtual void display()=0;//do-nothing function -->pure virtual funtion
};
class CWHvideo : public CWH
{
    float videoLength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r) // this will also call the base class constructor
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "\n\nthis is an amzing video with title " << title << endl
             << "Rating :" << rating << " out of 5 stars" << endl
             << "Lenth of the video is :" << videoLength << " minutes" << endl
             << endl
             << endl;
    }
};
class CWHword : public CWH
{
    int wordCount;

public:
    CWHword(string s, float r, int wc) : CWH(s, r) // this will also call the base class constructor
    {
        wordCount = wc;
    }
    void display()
    {
        cout << "this is an amzing text tutorial with title " << title << endl
             << "Rating of the text turorial :" << rating << " out of 5 stars" << endl
             << "Number of the words in the text tutorial is :" << wordCount << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    // for code with harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHvideo djvideo(title, rating, vlen);
    // djvideo.display();//with the help of object directly run

    // for code with harry text
    title = "Django tutorial text";
    words = 476;
    rating = 4.84;
    CWHword djword(title, rating, words);
    // djword.display();// with the help of object directly run

    // making pointer to show
    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djword;

    tuts[0]->display();
    tuts[1]->display();
    // in this example the vertual is given to the funtion so that the display function run for eatch class funciton
    // and the use the funtion of that class which is pointer is equal to

    cout << "\n you are very good ";
    return 0;
}
