//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 344282217
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, unsigned long p_4, unsigned long p_6,
                double p_9, double p_11[5][5][3])
{
  double v_13;
  unsigned long long v;
  signed char result;
  v_13 = 2.92402356502e+37;
  v = (unsigned long long)(p_11[0][4][0] - - v_13);
  result = (signed char)((double)(! (! p * - v)) - p_9);
  result = (signed char)(111ULL - ! (p + (unsigned long long)p_4) % (unsigned long long)(
                                  3964383712UL % ((p_6 + (unsigned long)result) + 68UL) + 493UL));
  result = result;
  return result;
}


