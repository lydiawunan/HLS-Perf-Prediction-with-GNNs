#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 726379482
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, int p_4[4][5], unsigned long p_6, double p_11,
              float p_15)
{
  float v_25;
  double v_23;
  unsigned char v_21;
  char v_19;
  float v_17;
  unsigned short v_13;
  short v_9;
  unsigned int v;
  long long result;
  v_25 = (float)p_4[0][2];
  v_23 = (double)p;
  v_21 = (unsigned char)p_15;
  v_19 = (char)39;
  v_17 = -259.423217773f;
  v_9 = (short)p_6;
  if ((! p % (long long)((int)(~ v_21) + 300)) * (long long)(-82 % (p_4[2][3] + 812) + (int)v_19) < (long long)(
      (-104 * ((int)((unsigned char)v_23) & 96)) * (((int)v_9 - (int)((short)v_25)) % (
                                                    ! p_4[3][1] + 980)))) {
    v_13 = (unsigned short)57457;
    v = (unsigned int)(- ((double)((long long)v_9 % (p + 669LL)) + p_11));
    v_9 = (short)p_6;
  }
  else {
    v_13 = (unsigned short)(-903103234 + (int)v_19);
    v = (unsigned int)(- (- ((float)p + v_17)));
    v_9 = (short)-52;
  }
  if (~ (((unsigned long)v & 4294909999UL) % (unsigned long)((int)v_9 + 1005)) > (unsigned long)(
      (187085255L + (long)((int)((unsigned char)p_11) * 109)) % (long)(
      (int)v_13 % (160204229 / ((int)p_15 + 16) + 218) + 37))) result = 17590LL;
  else result = ! (! (p >> 40LL));
  return result;
}


