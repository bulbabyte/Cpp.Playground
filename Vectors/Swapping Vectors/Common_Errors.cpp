for (i = 0; i < numPrices; ++i){ 
    // should be: numPrices / 2, otherwise array gets reversed twice
    tmp = prices.at(i);
    prices.at(i) = prices.at(numPrices - 1 -i);
    prices.at (numPrices - 1 - i) = temp;
}


for (i = 0; i < (numPrices / 2); ++i) {
    tmp = prices.at(i);
    prices.at(i) = prices.at(numPrices - i);
    // numPrices - i - 1 > last elment is numPrices -1 (N-1) not just numPrices(N)
    prices.at(numPrices - i - 1) = tmp;
}


for (i = 0; i < (numPrices / 2) ++i) {
    tmp = prices.at(i)
    // lines 20 + 21 need tro be swapped wrong order, thus causing value to be over written before being copied
    prices.at(numPrices - i - 1) = tmp;
    prices.at(i) = prices.at(numPrices - 1 - i)
}