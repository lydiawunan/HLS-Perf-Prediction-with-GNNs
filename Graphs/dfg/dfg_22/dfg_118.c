#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 980812491
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, unsigned long p_4, unsigned char p_7,
         unsigned long long p_9, signed char p_13[2])
{
  int v_27;
  unsigned char v_25;
  unsigned char v_23;
  double v_21;
  int v_19;
  unsigned char v_17;
  long v_15;
  unsigned long long v_11;
  long long v;
  char result;
  v_27 = (int)p_13[1];
  v_25 = (unsigned char)p_4;
  v_23 = (unsigned char)114;
  v_21 = -8.50117802203e+37;
  v_17 = (unsigned char)p;
  v_15 = 34758L;
  v_19 = (int)(((unsigned long)(((int)v_23 + (int)v_25) * (int)p_7) + p_4) - (unsigned long)(! (- v_27)));
  v_11 = (unsigned long long)(((((unsigned long)p_13[0] ^ p_4) - (unsigned long)p_7) * (unsigned long)(
                               (-289730407L - v_15) * (long)p)) % (unsigned long)(
                              ((int)v_17 % ((int)(- p_7) + 863)) / ((
                                                                    ! v_19 + (int)(- v_21)) + 796) + 198));
  v = (long long)((unsigned long long)p_7 / ((- (p_9 % (v_11 + 878ULL)) + (unsigned long long)(
                                              (long)((int)p_13[1] / 78) - 
                                              411084031L * (long)p_7)) + 969ULL));
  result = (char)((long long)p + ((long long)(~ p_4) * (v * v)) * (long long)p_4);
  return result;
}


