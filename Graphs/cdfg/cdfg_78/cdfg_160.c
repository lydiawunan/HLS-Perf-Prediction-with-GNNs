#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 404540654
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, unsigned char p_11, short p_13,
                  unsigned long p_19, unsigned short p_21[1][3][2])
{
  signed char v_29;
  unsigned long v_27;
  short v_25;
  short v_23;
  char v_17;
  char v_15;
  int v_9;
  char v_7;
  long v_5;
  unsigned int v;
  unsigned char result;
  v_29 = (signed char)-1;
  v_27 = p_19;
  v_25 = (short)26522;
  v_17 = (char)p_19;
  v_15 = (char)p_21[0][0][0];
  v_9 = -24704;
  v_7 = (char)p_21[0][2][1];
  v = 4294949734U;
  if ((unsigned long)(! (-58523L - (long)p_13) - -300418331L) > ! v_27) {
    v_5 = (long)v_15;
    v_7 = (char)(- (~ p_13));
    v = (unsigned int)((1.87739500107e+38 / (p + 957.)) / 198. - (double)(
                       v_9 << ((v + (unsigned int)p_11) & 31U)));
  }
  else {
    v_23 = (short)(((unsigned long)v_25 + - v_27) - (unsigned long)(-44571 * (int)p_13 + (
                                                                    (int)p_11 + (int)v_29)));
    v = (unsigned int)((((int)p_21[0][1][0] + (int)p_21[0][2][1]) - (int)(~ v_23)) - (int)p_11);
    v_5 = (long)((unsigned long)(- (~ v_17)) | (unsigned long)(! p_11) % (
                                               ~ p_19 + 67UL));
  }
  result = (unsigned char)((18446744072670883973ULL + (unsigned long long)(
                            v / ((unsigned int)p + 417U))) - (unsigned long long)(
                           (v_5 | (long)v_7) - ~ v_5));
  return result;
}


