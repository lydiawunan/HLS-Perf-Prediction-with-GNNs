#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 88980621
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, unsigned long long p_4, short p_13, int p_15,
         unsigned short p_19[4][3][3])
{
  long long v_17;
  unsigned char v_11;
  int v_9;
  long long v_7;
  long long v;
  char result;
  v_11 = (unsigned char)237;
  v_9 = (int)p_19[3][2][0];
  v_7 = -972966909LL;
  v = -928512118LL;
  result = (char)p_19[2][2][2];
  if ((long long)p == (long long)((int)result % ((int)v_11 + 770)) * (
                      v_7 % (v_7 + 895LL)) + -12098LL) {
    v_17 = (long long)p_19[2][2][2];
    result = (char)((long long)(-34989L + (long)v_11) / (v_17 + 402LL) << (
                    ~ (~ p_4) & 63ULL));
    v_9 = (int)((- v_7 * (long long)(59966 + (int)p_13)) * (long long)(
                (p_15 + -18) / (- p_15 + 300)));
  }
  else {
    v = (long long)(862395456UL - ~ (4294950128UL / (unsigned long)((int)result + 324)));
    v_11 = (unsigned char)(! ((long)p * 837311185L) * (long)(- (p_15 / (
                                                                p_15 + 13))));
    v_7 = (long long)(! v_11);
  }
  while (((unsigned long long)(85 / ((int)result + 666)) % ((unsigned long long)p % (
                                                            p_4 + 80ULL) + 706ULL) ^ 45628ULL) >= (unsigned long long)v) {
    result = (int)v_11 ^ v_9 % 72;
    v_9 = (int)(v_7 % (776LL * (v & 564727650LL) + 466LL));
    v_7 = (long long)v_9;
    v = (long long)((float)(- (19233L % (long)((int)p + 147))) * -7.20163410609e+37f);
  }
  while_0_break: ;
  return result;
}


