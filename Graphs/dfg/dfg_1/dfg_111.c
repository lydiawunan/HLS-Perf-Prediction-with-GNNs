//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 952013259
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p[1])
{
  short v_7;
  char v_4;
  short v;
  double result;
  v_7 = (short)p[0];
  v = (short)(p[0] + (unsigned int)(- v_7));
  v_4 = (char)37;
  result = (double)(- (18446744073709529328ULL / (unsigned long long)(
                       (int)v + 482) & (unsigned long long)v_4) << (p[0] & 63U));
  result = - (result + result);
  return result;
}


