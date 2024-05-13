#include "document.h"

using namespace std;

ostream& operator<<(ostream& out, const Document& document) {
    out << "{ "s
        << "document_id = "s << document.id_ << ", "s
        << "relevance = "s << document.relevance_ << ", "s
        << "rating = "s << document.rating_ << " }"s;
    return out;
}