#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 355262243
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, char p_9, unsigned int p_11[4][4], unsigned long p_13,
           short p_19)
{
  unsigned long v_25;
  long v_23;
  unsigned char v_21;
  unsigned int v_17;
  double v_15;
  unsigned char v_7;
  signed char v_5;
  short v;
  double result;
  v_21 = (unsigned char)120;
  v_17 = p_11[0][3];
  v_15 = -866.138395795;
  v_5 = (signed char)-63;
  while ((unsigned int)p >= ((unsigned int)(-5897 % (p + 991)) * ! v_17) * (
                            (unsigned int)p_9 * 4294940370U + (unsigned int)(
                            (int)((short)-2388722688.f) + (int)p_19))) {
    v_23 = (int)v_21 / 8946;
    v_25 = (unsigned long)(- 0.019144323114);
    v_21 = (unsigned char)((v_25 - (unsigned long)v_5) / (unsigned long)(
                           (p_11[3][1] >> (p & 31)) + 804U) + (unsigned long)(~ (
                           (long)p_19 + v_23)));
    v_17 = (unsigned int)p_19;
  }
  while_0_break: ;
  if ((double)((unsigned long)((unsigned int)-144.441467285f % (p_11[3][3] + 547U)) - (
               p_13 + p_13)) - - (4294953132. * v_15) > (double)(((unsigned long)(
                                                                  672494480U * v_17) & 774770339UL) % (unsigned long)(
                                                                 (-8 >> (
                                                                  (int)p_9 % (
                                                                  (int)p_19 + 483) & 7)) + 642))) {
    v_7 = (unsigned char)(! -53921);
    v = (short)((long long)((int)v_5 - (int)((signed char)((double)v_7 + -6406906014.24))) + 
                (long long)((int)p_9 / ((int)v_7 + 24)) % (24262LL * (long long)p_11[1][2] + 236LL));
    result = (double)(p / (72 / (56995 % ((int)v + 1009) + 895) + 542));
  }
  else result = (double)740614120ULL;
  return result;
}


