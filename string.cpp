//To convert a string to list of words.
std::istringstream iss1(s1);
std::deque<std::string> deque1(
    (std::istream_iterator<std::string>(iss1)),
    std::istream_iterator<std::string>());
//prefix and suffix analysis

getline(ss,s,' ') // getline(istream, var2copy, delimeter)

s.find(delimeter_str, start_pos);
