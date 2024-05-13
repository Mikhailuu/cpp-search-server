#pragma once
#include <iostream>

enum class DocumentStatus {
    ACTUAL,
    IRRELEVANT,
    BANNED,
    REMOVED,
};

struct Document {
    Document() = default;

    Document(int id, double relevance, int rating)
        : id_(id)
        , relevance_(relevance)
        , rating_(rating) {
    }

    int id_ = 0;
    double relevance_ = 0.0;
    int rating_ = 0;
};

std::ostream& operator<<(std::ostream& out, const Document& document);