const BrotliDecompress = require('./NativeBrotliDecompress').default;

export function multiply(a: number, b: number): number {
  return BrotliDecompress.multiply(a, b);
}
