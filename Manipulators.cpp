#include <iostream>
#include <iomanip>  
std::ostream& dcolon(std::ostream& os) {
    os << " :: ";
    return os;
}

int main() {
    int a = 123;
    int b = 0xAB;    
    double x = 3.14159265;
    bool flag = true;

    std::cout << "1) Basic integers and bools:\n";
    std::cout << "   default: " << a << ", bool: " << flag << '\n';
    std::cout << "   boolalpha: " << std::boolalpha << flag << '\n';
    std::cout << std::noboolalpha; 

    std::cout << "\n2) Hex / Oct / showbase / uppercase:\n";
    std::cout << "   dec: " << std::dec << b << '\n';
    std::cout << "   hex (no base): " << std::hex << b << '\n';
    std::cout << "   hex with base and uppercase: " << std::showbase << std::uppercase << b << '\n';
    std::cout << std::dec << std::noshowbase << std::nouppercase;

    std::cout << "\n3) Width, fill and alignment:\n";
    std::cout << "   default: [" << a << "]\n";
    std::cout << "   setw(8) right: [" << std::setw(8) << a << "]\n";
    std::cout << "   setw(8) left:  [" << std::left << std::setw(8) << a << std::right << "]\n";
    std::cout << "   setfill('*') setw(8): [" << std::setfill('*') << std::setw(8) << a << std::setfill(' ') << "]\n";

    std::cout << "\n4) Floating point precision/format:\n";
    std::cout << "   default: " << x << '\n';
    std::cout << "   setprecision(4): " << std::setprecision(4) << x << '\n';
    std::cout << "   fixed setprecision(4): " << std::fixed << std::setprecision(4) << x << '\n';
    std::cout << "   scientific setprecision(3): " << std::scientific << std::setprecision(3) << x << std::defaultfloat << '\n';

    std::cout << "\n5) Field internal (sign padding):\n";
    int neg = -42;
    std::cout << "   default: [" << neg << "]\n";
    std::cout << "   internal, setw(6), fill('.') : ["
              << std::setfill('.') << std::internal << std::setw(6) << neg
              << std::setfill(' ') << std::right << "]\n";

    std::cout << "\n6) Built-in manipulators that change stream state:\n";
    std::cout << "   (endl adds newline and flush) -> before" << std::endl;
    std::cout << "   after endl (no explicit flush here) \n";

    std::cout << "\n7) Using a custom manipulator:\n";
    std::cout << "   Hello" << dcolon << "World" << '\n';

    std::cout << std::defaultfloat << std::setprecision(6);

    return 0;
}

