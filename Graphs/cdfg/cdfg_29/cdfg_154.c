#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 556075493
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p[5][5], unsigned int p_5[5][4][1], unsigned short p_7,
                 unsigned int p_11, unsigned short p_13[4])
{
  unsigned char v_21;
  unsigned short v_19;
  double v_17;
  double v_15;
  signed char v_9;
  unsigned short v;
  unsigned int result;
  v_21 = (unsigned char)p_11;
  v_17 = (double)p_5[2][2][0];
  v_15 = 1.00204542886e+38;
  v_19 = (unsigned short)(! (((int)p_13[3] % 64404) * (int)(~ v_21)));
  if ((unsigned long long)((int)v_19 % ((int)(~ p_7) + 445)) < 39054849ULL + (unsigned long long)p_5[0][3][0]) {
    v = (unsigned short)(- ((436873188. / (v_15 + 529.)) * ((double)p_13[1] * v_17)));
    v_9 = (signed char)((p_11 & (unsigned int)p_13[2]) - p_11);
    result = ((unsigned int)((int)v - p[0][3]) ^ ~ p_5[3][1][0]) - (unsigned int)(
             (int)(- p_7) * ((int)v_9 / -28778));
  }
  else result = (unsigned int)(4063245 / (-14164 / (((int)p_13[2] - (int)p_13[0]) + 849) + 36));
  return result;
}


