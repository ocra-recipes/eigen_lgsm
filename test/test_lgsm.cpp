#include <Eigen/Lgsm>
#include <iostream>

int main(int argc, char ** argv)
{
    // Eigen::Displacementd a,b;
    Eigen::Twistd c;
    Eigen::Wrenchd d;
    //
    //Eigen::Vector3d test = d.getTorque();
    std::cout << c.getAngularVelocity() << std::endl;
    // // std::cout << d.getTorque() << std::endl;
    // // std::cout << d.getForce() << std::endl;
    // //
    // // std::cout << a.adjoint() << std::endl;
    // auto e = a*b;
    //
    // std::cout << "a : " << a << std::endl;
    // std::cout << "b : " << b << std::endl;
    // std::cout << "a*b : " << e << std::endl;

    return 0;
}
