#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 406154377
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, double p_7[1][1][3], unsigned int p_19, int p_21,
        signed char p_27)
{
  char v_25;
  double v_23;
  double v_17;
  unsigned long long v_15;
  unsigned int v_13;
  unsigned long long v_11;
  signed char v_9;
  unsigned long long v_5;
  unsigned long long v;
  int result;
  v_25 = (char)p_21;
  v_23 = (double)p_21;
  v_17 = 5771950843.56;
  v_15 = 18446744072766350613ULL;
  v_13 = 370848078U;
  v_11 = 589668544ULL;
  v = 18446744073709498279ULL;
  result = p_21;
  if (((unsigned long long)((int)v_25 << 3) * 889014014ULL) / (unsigned long long)(
      p + 694) == (v_15 | ~ ((unsigned long long)p_21 % (v + 994ULL)))) {
    v_5 = (v_11 - 4294965389ULL) / ((v_11 << (result & 63)) + 588ULL) + (unsigned long long)(- (
          -113 | (int)v_25));
    v_17 = (double)(9614U + v_13);
    v_15 = ((v_15 + (unsigned long long)p_7[0][0][1]) + (unsigned long long)(
            p / (p_21 + 67))) - (unsigned long long)v_23;
  }
  else {
    v_5 = (unsigned long long)(! (~ p_19 % ((unsigned int)(- p_7[0][0][2]) + 784U)));
    v_13 = (1354U + ((unsigned int)p_21 + p_19)) - (unsigned int)result;
    v_15 = (unsigned long long)p_27;
  }
  if ((double)(- v_11 % (unsigned long long)((v_13 ^ (unsigned int)-1.81267423767e+38f) + 85U)) - (
      (double)v_15 / (v_17 + 208.) - (double)(v_5 / (unsigned long long)(
                                              p_19 + 587U))) != p_7[0][0][2]) {
    v_5 = (unsigned long long)(! (short)6084);
    v = (unsigned long long)(! (~ p)) + (94ULL + v_5 % ((unsigned long long)p_7[0][0][0] + 751ULL));
    result = 0;
  }
  else {
    v_9 = (signed char)30;
    result = (int)v_9;
  }
  return result;
}


