#include <iostream>
#include <armadillo>

int main(int argc, const char **argv)
{
    arma::arma_rng::set_seed_random();

    arma::Mat<double> A = arma::randu(6, 6);
    std::cout << "A:\n" << A << "\n";

    std::cout << "A * A.t() =\n";
    std::cout << A * A.t() << "\n";

    // Create a new vector as the main diagonal A:
    arma::Mat<double> C = arma::diagvec(A);
    std::cout << "C:\n" << C << "\n";
    std::cout << "C.t():\n" << C.t() << "\n";

    // Save matrices A and B:
    A.save("A_mat.txt", arma::arma_ascii);
    C.save("C_mat.txt", arma::arma_ascii);

    return 0;
}