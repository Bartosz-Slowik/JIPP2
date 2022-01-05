
#ifndef JIPP2_NOTE_H
#define JIPP2_NOTE_H

#include <iostream>

using namespace std;

class Note {
protected:
    string title;

public:
    Note(const string &title);

    string getTitle();
    void setTitle(string title);
    virtual string getContent() = 0;
    virtual void setContent(string)=0;
};


class TextNote : public Note{
protected:
    string content;

public:
    TextNote(const string &title, const string &content);

    string getContent();
    void setContent(string);
};


class ListNote : public Note{
protected:
    string content[100];

public:

    ListNote(const string &title, string *content);

    string getContent();
    void setContent(string);
};


#endif //JIPP2_NOTE_H
