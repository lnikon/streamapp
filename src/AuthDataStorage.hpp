#ifndef AUTHDATASTORAGE_H
#define AUTHDATASTORAGE_H

#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <optional>

class AuthDataStorage
{
public:
    AuthDataStorage()
    {
        m_encodedAuthData.push_back("aGVsbG86emFyemFuZA==");
    }

    std::optional<std::string> getAuthTypeFromHeader(const std::string& header) const;
    std::optional<std::string> getAuthValueFromHeader(const std::string& header) const;

    bool isAuthValueExists(const std::string& authValue) const;

private:
    // Contains base64 encoded login:password strings
    std::vector<std::string> m_encodedAuthData;
};

#endif // AUTHDATASTORAGE_H
