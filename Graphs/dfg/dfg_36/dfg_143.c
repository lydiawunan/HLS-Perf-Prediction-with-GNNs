#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 178101727
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, double p_5, unsigned char p_7, unsigned short p_13,
         int p_17)
{
  float v_21;
  short v_19;
  double v_15;
  unsigned char v_11;
  unsigned long long v_9;
  double v;
  long result;
  v_21 = -79.6974716187f;
  v_19 = (short)p_13;
  v_15 = 6780783990.96;
  v = (double)p_17;
  v_9 = (unsigned long long)v_21;
  v_11 = (unsigned char)((int)((53606. - v_15) / 2.73410735115e+38 - v) - (
                         (int)(- (- v_19)) & (int)((unsigned char)p_5)));
  v = (double)((v_9 + (unsigned long long)(- ((int)p_7 % ((int)v_11 + 69)))) + 
               (unsigned long long)(((unsigned long)p_13 - 991470483UL) >> (
                                    (unsigned long)(v_15 + (double)p_17) & 31UL)) % (
               0ULL % (v_9 + 445ULL) + 720ULL));
  result = (long)(((int)p - (int)((unsigned char)(- (v + p_5)))) - (int)p_7);
  return result;
}


