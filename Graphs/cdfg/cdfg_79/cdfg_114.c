#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 342891998
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p[1][5], char p_4, short p_11,
                  unsigned int p_13, unsigned int p_15)
{
  long v_23;
  short v_21;
  long v_19;
  int v_17;
  unsigned int v_9;
  double v_7;
  unsigned long long v;
  unsigned char result;
  v_23 = 47951L;
  v_21 = (short)-4269;
  v_19 = 24665L;
  v_17 = (int)p[0][3];
  v = (unsigned long long)p_11;
  result = (unsigned char)207;
  if ((unsigned int)(! result) != p_13 - (unsigned int)result) {
    v_21 = v_21;
    v_7 = (double)(((unsigned long)(~ p_13) % (unsigned long)(-544383614L * (long)v_17 + 339L)) / (unsigned long)(
                   ~ v_19 % (long)((int)v_21 + 148) + 22L));
    v = (unsigned long long)((p_15 - (unsigned int)(~ p_11)) % (unsigned int)(
                             (int)p_4 + 966));
  }
  else {
    v_9 = (unsigned int)((((unsigned long long)p_4 ^ v) << ((unsigned long)p_15 * (unsigned long)v_23 & 63UL)) / (unsigned long long)(
                         (p_13 - (unsigned int)((int)p_4 / ((int)v_21 + 177))) + 238U));
    v = (unsigned long long)((double)(~ ((long long)v_9 & -55094LL)) / (
                             (double)p[0][1] * 4721858477. + 256.));
    v_7 = (double)(! (3UL * (unsigned long)p_4));
  }
  while ((float)((int)((unsigned char)-2.5899698886e+38) * (int)result) + (
         (float)((int)p[0][2] + (int)p_4) + -198384592.f) != (float)result) {
    v_9 = v + 18446744072732099534ULL;
    v_7 /= (double)p_13 + 309.;
    v = (unsigned long long)(! (! (! 3348610651UL)));
    result = (unsigned char)(! ((unsigned int)((int)p_11 + (int)p[0][3]) % (
                                - v_9 + 157U)));
  }
  while_0_break: ;
  return result;
}


