#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 168790589
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p[4][3], unsigned short p_5,
         unsigned long long p_9[4], double p_13, unsigned int p_17[3][5][3])
{
  char v_23;
  unsigned long long v_21;
  unsigned long long v_19;
  long v_15;
  double v_11;
  char v_7;
  unsigned long long v;
  char result;
  v_23 = (char)109;
  v_19 = (unsigned long long)p_17[0][0][1];
  v_15 = -878441439L;
  v_11 = 515.017472987;
  v_7 = (char)-1;
  v = 136531051ULL;
  result = (char)10;
  while ((int)(~ result) >= (int)(- (~ p_5))) {
    v_19 = (int)v_23 - -100;
    v_23 = (char)(~ (32672ULL - ((unsigned long long)v_15 - 31584ULL)));
    v = (unsigned long long)(- ((double)p_9[3] / ((double)result / -2063194364.7 + 463.)));
    result = (char)(! (~ p_9[1] - (unsigned long long)(! p_17[0][2][2])));
  }
  while_0_break: ;
  while (((v & (unsigned long long)p[0][2]) % (unsigned long long)(((int)p_5 - 24975) + 853)) * (
         (unsigned long long)v_7 * (p_9[0] | (unsigned long long)v_11)) < (unsigned long long)(
         - p_13 - (double)((unsigned long long)(v_15 >> 2) + ((unsigned long long)p_17[1][0][1] - p_9[2])))) {
    result = v_19 - 4294926284ULL;
    v_21 = (unsigned long long)(- (p_13 + v_11) - (double)p_17[2][1][0]);
    v_15 = (long)((p_9[1] + ! v) - (unsigned long long)((double)v_7 * v_11) % (
                                   v_21 + 617ULL));
    v_11 = (double)p[0][2];
  }
  while_0_break_0: ;
  return result;
}


