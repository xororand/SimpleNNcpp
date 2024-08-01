#pragma once

#include <iostream>
class matrix {

private:
	int raw_; // строка
	int col_; // столбец

public:
	double long** m_;

	matrix(int raw = 0, int col = 1) {
		this->raw_ = raw;
		this->col_ = col;
		m_ = new double long* [raw];
		for (int i = 0; i < raw; i++) {
			m_[i] = new double long[col];
		}
		double long null = 0.0f;
		for (int r = 0; r < raw_; r++)
			for (int c = 0; c < col_; c++)
				m_[r][c] = null;
	}

	template <typename TwoD>
	matrix(TwoD &arr) {
		int raw = sizeof arr / sizeof arr[0];
		int col = sizeof arr[0] / sizeof(typeid(arr[0]).name());

		this->raw_ = raw;
		this->col_ = col;

		m_ = new double long* [raw];
		for (int i = 0; i < raw; i++) {
			m_[i] = new double long[col];
		}

		for (int r = 0; r < raw_; r++)
			for (int c = 0; c < col_; c++)
				m_[r][c] = arr[r][c];
	}

	matrix dot(matrix& b) {

		int n = this->rows(); // количество строк матрицы A
		int m = b.cols(); // количество столбцов матрицы B
		int p = b.rows(); // количество строк матрицы B


		matrix c(n, m); // результирующая

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				for (int k = 0; k < p; k++) {
					c(i, j) += m_[i][k] * b(k, j);
				}
			}
		}

		return c;
	}

	void print() {
		for (int r = 0; r < raw_; r++) {
			for (int c = 0; c < col_; c++)
				std::cout << m_[r][c] << " ";
			std::cout << std::endl;
		}
	}

	int rows() const {
		return raw_;
	}
	int cols() const {
		return col_;
	}
	double long& operator()(int row, int col = 1) {
		return m_[row][col];
	}
	const double long& operator()(int row, int col = 1) const {
		return m_[row][col];
	}
};