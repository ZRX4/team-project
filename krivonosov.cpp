// Количество теплоты
double heat(double c, double m, double dt) {
	return c * m * dt;
}

// Изменение температуры
double tempChange(double Q, double c, double m) {
	return Q / (c * m);
}