#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 118461222
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, unsigned int p_7, signed char p_9, unsigned int p_11,
                int p_15[5])
{
  float v_23;
  long long v_21;
  double v_19;
  int v_17;
  unsigned short v_13;
  short v_4;
  unsigned long long v;
  signed char result;
  v_23 = -5.19846778166e+37f;
  v_21 = (long long)p_9;
  v_19 = 276.207474277;
  v_17 = -660035911;
  v_4 = (short)1222;
  result = (signed char)p_11;
  if (4294932632UL != (unsigned long)(-466722240L / (long)(~ v_17 + 288)) % (unsigned long)(
                      (p_7 * p_11 + (unsigned int)(p_15[4] % -882437788)) + 445U)) {
    v_23 = (float)((long long)(! (p_15[2] * 17680)) / 192LL);
    v_4 = (short)(! (~ (334512119L + (long)p_9)));
    v_13 = (unsigned short)((unsigned long)(- (p_15[0] - (int)p)) / 4294967295UL);
  }
  else {
    v_13 = (unsigned short)(- (- -2.0392912023e+38));
    result = (signed char)v_23;
    v_21 = (long long)(! (~ p_15[2])) / ((v_21 * 3438808950LL + (long long)(- p)) + 331LL);
  }
  if ((float)(((int)((char)-230.628722092) - (int)p) * ~ p_15[0]) / -7438915072.f != - v_23) {
    v_4 = (short)(((p_7 | (unsigned int)p_9) % (unsigned int)((int)(! p) + 386)) * (
                  ((unsigned int)v_4 + p_11) * (unsigned int)v_13));
    v = (unsigned long long)v_4 % ((18446744073709551218ULL % (unsigned long long)(
                                    (int)p + 294)) * (unsigned long long)result + 508ULL);
    result = (signed char)(3644534549ULL * (~ v ^ 0ULL));
  }
  else {
    v_17 = (int)((long long)v_19 % (~ (15LL ^ v_21) + 154LL));
    result = (signed char)(- (- ((double)p - 3065887083.19)));
    result = (signed char)(! (- p_15[2]) / (v_17 * ((int)p + (int)result) + 799));
  }
  return result;
}


