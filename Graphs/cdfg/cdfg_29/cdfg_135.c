#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1011280488
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, signed char p_4, signed char p_6[2],
                  unsigned short p_8, int p_11)
{
  unsigned long v_17;
  unsigned long long v_15;
  unsigned short v_13;
  int v;
  unsigned char result;
  v_17 = (unsigned long)p_11;
  v_15 = 18446744073709495791ULL;
  v_13 = (unsigned short)11372;
  v = (int)p;
  result = (unsigned char)p_4;
  if (! (((unsigned long long)p_4 + v_15) >> (~ p & 63UL)) < (unsigned long long)(
      ((int)p_6[1] % ((int)v_13 + 274) + ((int)((unsigned short)-1.58433323226e+38) - (int)v_13)) * (
      (int)(! result) * (int)v_13))) {
    result = (unsigned char)(v_17 - (unsigned long)((long)((int)p_6[1] % 860999751) % (
                                                    ((long)p_4 & 47657L) + 668L)));
    v = ((int)p_8 & (int)p_6[1]) / ((int)(- result) + 1008) << ((int)v_13 & 31);
    v = (v >> ((int)(- result) & 31)) % ((v ^ (int)4330432207.52) + 584);
  }
  else {
    v_13 = (unsigned short)(v_17 + ((unsigned long)((int)result - 150) + 242608850UL));
    v = (int)(! ((unsigned long)p_11 - (v_17 | (unsigned long)v)));
    v_15 = (unsigned long long)(~ (((int)p_6[0] - -95) / ((p_11 - (int)result) + 139)));
  }
  if (((unsigned long long)((660795475L << ((int)v_13 & 31)) * (long)(
                            (int)p_4 & -65)) & v_15 / 18446744073709551577ULL) <= v_15) 
    result = (unsigned char)(- (- -450.866098026));
  else {
    result = (unsigned char)(((unsigned int)v * 425405293U) / (unsigned int)(
                             p_11 + 594));
    result = (unsigned char)(((unsigned long)((int)result >> ((int)p_4 & 7)) - 
                              454683904UL % (unsigned long)((int)p_6[0] + 816)) % (unsigned long)(
                             (int)p_8 * 53 + 663));
    result = (unsigned char)((unsigned long long)((unsigned long)(! result) + 
                                                  p / (unsigned long)(
                                                  (int)result + 335)) + 18446744073542066090ULL);
  }
  return result;
}


