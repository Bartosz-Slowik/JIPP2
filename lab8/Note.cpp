
#include <string>
#include <Note.h>

using namespace std;

Note::Note(const string &title) : title(title) {}
string Note::getTitle() {
    return this->title;
}
void Note::setTitle(string title) {
    this->title = title;
}



TextNote::TextNote(const string &title, const string &content) : Note(title), content(content) {}

string TextNote::getContent() {
    return this->content;
}

void TextNote::setContent(string content) {
    this->content=content;
}


ListNote::ListNote(const string &title, string * content) : Note(title) {
    for(int i=0; i<100; i++){
        this->content[i]="\n";
    }

}

string ListNote::getContent() {
    string returnString;
    for(int i=0; i<100; i++){
        returnString+= this->content[0];
    }
    return returnString;
}

void ListNote::setContent(string content) {
    int j=0;
    string temp="";
    for(int i=0; i<content.length(); i++){
        temp+=content[i];
        if (content[i] == '\n') {
            this->content[j]=temp;
            temp="";
            j++;
        };
    }
}