#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 232903542
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, short p_5, unsigned int p_7[4][3],
              signed char p_11, long p_13[3][3])
{
  double v_27;
  short v_25;
  char v_23;
  char v_21;
  double v_19;
  unsigned long v_17;
  int v_15;
  int v_9;
  short v;
  long long result;
  v_27 = (double)p_11;
  v_25 = (short)-22820;
  v_21 = (char)-106;
  v_19 = (double)p_7[0][2];
  v_17 = 62926UL;
  if ((double)(-28160L - (long)((int)((short)v_19) + (int)p_5) * (p_13[2][0] % -658451512L)) == v_27) {
    v_19 = (double)((int)p_5 / ((int)(- (~ p)) + 326));
    v_9 = (int)((v_17 + (unsigned long)v_19) * (unsigned long)((int)p_5 + (int)p_11) ^ (unsigned long)(~ (
                p_13[2][0] + (long)v_21)));
    result = (long long)-249.131546021f;
  }
  else {
    v_23 = (char)(~ ((int)v_25 - 48216) / -53737);
    result = (long long)(- ((unsigned long)(! v_23) / (v_17 + 911UL)));
    v_9 = (int)p_5;
  }
  if ((int)(! p) <= (int)((unsigned char)(- (0.f / (912.412536621f / (
                                                    (float)result + 389.f) + 996.f))))) {
    v = (short)v_9;
    v = (short)((unsigned int)(~ ((int)v & (int)p_5)) + p_7[2][2]);
    result = (long long)((4809976651ULL - (unsigned long long)((int)p / 842724983)) >> (
                         16319LL % (result % (long long)((int)v + 275) + 158LL) & 63LL));
  }
  else {
    v_15 = (int)(66521378ULL - (unsigned long long)(p_7[3][0] + (unsigned int)p_5) % (
                               ((unsigned long long)p_13[1][2] - 18446744073709501819ULL) + 910ULL));
    result = (long long)(((long)(3789 - (int)p_11) % (p_13[2][1] + 785L)) * (long)(
                         -11808 + (v_15 - 606)));
  }
  return result;
}


