#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 150524686
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p[3], float p_11, unsigned long long p_13[1][2],
                   unsigned char p_15, unsigned char p_21)
{
  signed char v_29;
  char v_27;
  unsigned int v_25;
  unsigned short v_23;
  unsigned long v_19;
  long v_17;
  unsigned char v_9;
  unsigned int v_6;
  unsigned short v_4;
  unsigned int v;
  unsigned short result;
  v_29 = (signed char)p_15;
  v_27 = (char)33;
  v_25 = 3638U;
  v_23 = (unsigned short)p_13[0][0];
  v_19 = 3354580637UL;
  v_17 = (long)p_13[0][0];
  v_9 = (unsigned char)212;
  v_6 = (unsigned int)p_13[0][1];
  v_4 = (unsigned short)13063;
  v = (unsigned int)p_21;
  while (15454L + - ((long)v_9 - v_17) >= (long)(! v_23)) {
    v_6 = (int)v_29 + ((int)v_27 - -7600);
    v = (unsigned int)((long long)p_15 - -46447LL);
    v_29 = (signed char)(-(short)1059);
    v_17 = (long)p_15;
  }
  while_0_break: ;
  if ((12UL & 47924UL / (unsigned long)(v_25 % (unsigned int)((int)p[2] + 136) + 108U)) < (unsigned long)(~ (~ (
      (int)v_9 - (int)((unsigned char)p_11))))) {
    v_4 = (unsigned short)((int)v_4 & ~ ((int)v_9 * (int)((unsigned char)-7005841920.f)));
    v_9 = (unsigned char)(! (((unsigned long long)p_11 * p_13[0][0]) * (unsigned long long)(~ v)));
    result = (unsigned short)((long long)((v + (unsigned int)v_4) * (
                                          v_6 / 2056U)) % ((18680LL | (long long)(
                                                            (int)p[2] % (
                                                            (int)v_9 + 209))) + 579LL));
  }
  else {
    v_19 = (unsigned long)(18446744073709551615ULL * (18446744073709504105ULL ^ (unsigned long long)(
                                                      4294959395UL * v_19)));
    v_17 = (long)(~ ((unsigned long)v_6 + v_19) >> ((unsigned int)p_21 / (
                                                    ((unsigned int)v_23 - v) + 79U) & 31U));
    result = (unsigned short)((unsigned long)((int)((unsigned char)(p_11 / 41693.f)) - (int)(~ p_15)) - (
                              (unsigned long)v | (unsigned long)(-42L + v_17)));
  }
  return result;
}


