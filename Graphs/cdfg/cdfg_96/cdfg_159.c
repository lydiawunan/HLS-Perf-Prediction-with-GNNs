#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 562383362
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, unsigned int p_5[3], unsigned char p_9[1][1],
         long long p_15, long p_17)
{
  long v_21;
  char v_19;
  char v_13;
  int v_11;
  unsigned char v_7;
  unsigned char v;
  long result;
  v_21 = (long)p;
  v_19 = (char)46;
  v_13 = (char)69;
  v = (unsigned char)198;
  result = p_17;
  v_7 = (unsigned char)p_17;
  if ((unsigned long long)((long long)(- (- p_9[0][0])) / (! ((long long)v * -194888047LL) + 818LL)) <= 
      (((unsigned long long)v_13 + 18446744073180360022ULL) * (p - (unsigned long long)p_9[0][0])) % 18446744073292344594ULL) {
    result = (long)((unsigned long long)result % (p + 981ULL));
    v = (unsigned char)((unsigned long)(p_5[1] * p_5[1]) * (unsigned long)(! result) + (
                        (unsigned long)p_9[0][0] / 3351327906UL & (unsigned long)(
                        -516182424L - (long)v_7)));
    result = (long)(! (((unsigned long long)v ^ p) / (unsigned long long)(
                       (p_5[0] & (unsigned int)v_7) + 658U)));
  }
  else {
    v_13 = (char)((long)v_19 + - p_17 % (! v_21 + 515L));
    v_11 = (int)(! (p_15 - (long long)p_17));
    result = (long)(35 + (v_11 - (int)v_13));
  }
  return result;
}


