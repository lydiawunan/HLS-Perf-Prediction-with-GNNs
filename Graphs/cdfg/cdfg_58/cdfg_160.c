#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 165420836
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, int p_4, unsigned short p_6, long p_8,
                unsigned long p_10)
{
  signed char v_13;
  char v;
  signed char result;
  v_13 = (signed char)55;
  v = (char)((847UL & p_10) / (unsigned long)((int)v_13 + 912) >> (~ p_10 & 31UL));
  if ((unsigned long)((112L % (p_8 + 118L)) % (long)((int)(~ v) + 538)) == 
      (unsigned long)p_4 % (((unsigned long)p_8 + (unsigned long)p) / (unsigned long)(
                            (214 - (int)p_6) + 814) + 882UL)) {
    result = (signed char)(! (((int)9.44250081929e+37 * p_4) / (((int)p_6 >> (
                                                                 p_8 & 15L)) + 445)));
    result = (signed char)(! (- p * (unsigned int)((int)result - -521244560)));
  }
  else {
    result = (signed char)(~ p_10);
    result = result;
  }
  return result;
}


