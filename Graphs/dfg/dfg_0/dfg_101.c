//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 88496019
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, long p_5, unsigned long long p_7, unsigned char p_9,
         long long p_11)
{
  double v_13;
  int v;
  char result;
  v_13 = (double)(- p);
  v = (int)(- ((double)(-1.44459160349e+38f - (float)p_11) / ((double)p_7 / (
                                                              v_13 + 333.) + 575.)) * 41628.);
  result = (char)((unsigned long long)((813973057UL % (unsigned long)(
                                        (p - p) + 485L)) % (unsigned long)(
                                       - v + 625)) * (((unsigned long long)p_5 / 51865ULL - 
                                                       18446744073709551609ULL % (
                                                       p_7 + 458ULL)) % (unsigned long long)(
                                                      - ((int)p_9 / 214) + 753)));
  return result;
}


