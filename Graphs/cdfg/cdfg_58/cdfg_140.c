#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 479348190
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, unsigned char p_4[2][5][1], double p_9, char p_11,
                  unsigned int p_17)
{
  unsigned short v_15;
  double v_13;
  unsigned char v_7;
  double v;
  unsigned char result;
  v_15 = (unsigned short)p_17;
  v_13 = 5.37486269761e+37;
  result = (unsigned char)p_11;
  v = (double)(! (54699U * (unsigned int)((int)p_11 ^ p)));
  if ((unsigned int)((- v_13 / ((double)((unsigned int)v_15 + p_17) + 636.)) * v) <= 
      p_17 % 63352U) result = (unsigned char)(~ (p - (int)(~ p_4[1][4][0])));
  else {
    v = - ((-8. - v) + (double)((int)result + (int)((unsigned char)-3.96675401601e+37)));
    v_7 = (unsigned char)(((int)p_4[1][0][0] % ((int)((char)p_9) / ((int)p_11 + 464) + 804)) * p);
    result = (unsigned char)(- ((int)p_4[0][0][0] + (int)((unsigned char)(
                                v / ((double)v_7 + 35.)))));
  }
  return result;
}


