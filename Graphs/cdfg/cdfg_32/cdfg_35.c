#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1052769050
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, unsigned char p_7[4][4], double p_9, float p_11,
        short p_13[5])
{
  double v_19;
  unsigned char v_17;
  unsigned long v_15;
  unsigned short v_5;
  int v;
  int result;
  v_17 = (unsigned char)185;
  v_15 = (unsigned long)p_9;
  v_5 = (unsigned short)p_9;
  v = (int)p;
  while ((unsigned int)((int)((unsigned short)3144491129.74) % ((int)v_5 + 382)) * (
         (unsigned int)(- p_11) * p) == (unsigned int)v) {
    v_5 = (unsigned long long)v_17 & (unsigned long long)v_15 / 18446744073709524631ULL;
    v_19 = (double)-59839LL;
    v_17 = (unsigned char)(! (-25345 ^ (int)v_19) * (int)(p_11 - (float)(
                                                          p % 40U)));
    v = (int)(! (-33321L));
  }
  while_0_break: ;
  if (- (- (- p_11)) <= (float)((int)p_13[2] + 2552 * (int)(p_11 + (float)v))) {
    v = (int)p;
    result = ~ (! v);
  }
  else {
    v_5 = (unsigned short)p_9;
    result = (int)((unsigned int)((7761312742.28 / ((double)v_5 + 1010.)) * 0.) * (
                   p - (unsigned int)(-699902970 + (int)p_7[2][0])));
  }
  return result;
}


