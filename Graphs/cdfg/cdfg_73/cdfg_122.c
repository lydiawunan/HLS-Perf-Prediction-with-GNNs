#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1026068455
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, int p_4[4][1], long long p_6[1][5], long p_8,
         unsigned char p_13)
{
  unsigned long long v_27;
  unsigned short v_25;
  unsigned long long v_23;
  unsigned long long v_21;
  char v_19;
  long v_17;
  long long v_15;
  long v_11;
  int v;
  char result;
  v_27 = (unsigned long long)p_13;
  v_23 = 18446744073042356850ULL;
  v_21 = (unsigned long long)p;
  v_19 = (char)117;
  v_17 = (long)p_6[0][3];
  if (v_27 * (unsigned long long)(~ p) < (unsigned long long)v_17) {
    v_15 = (long long)(((unsigned long long)v_19 - v_21) | (unsigned long long)(
                       (int)v_19 * p_4[1][0] + -135993763));
    v_11 = (long)(- (! (! (short)-3475)));
    v_17 = - (! v_11) / (- v_11 + 512L);
  }
  else {
    v_25 = (unsigned short)v_27;
    v_17 = (long)v_25;
    v_15 = (long long)(- (- (190ULL / (v_23 + 137ULL))));
  }
  if ((long long)((unsigned long)p_4[0][0] ^ 48800UL) / (v_15 / (long long)(
                                                         v_17 + 641L) + 972LL) - 4294958225LL > p_6[0][4]) 
    result = (char)(- ((int)p >> 3L) % (! (p_4[0][0] << (p_6[0][0] & 31LL)) + 619));
  else {
    v_11 = (long)p_13;
    v = (int)((unsigned char)(-358206999924. + (double)v_11)) | (int)(! p_13);
    result = (char)(- (p_8 * (long)v) + (long)v);
  }
  return result;
}


