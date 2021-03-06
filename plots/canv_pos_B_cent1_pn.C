{
//=========Macro generated from canvas: canv_pos_B_cent1_pn/canv_pos_B_cent1_pn
//=========  (Tue Sep 30 17:57:21 2014) by ROOT version5.34/21
   TCanvas *canv_pos_B_cent1_pn = new TCanvas("canv_pos_B_cent1_pn", "canv_pos_B_cent1_pn",0,0,700,500);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canv_pos_B_cent1_pn->SetHighLightColor(2);
   canv_pos_B_cent1_pn->Range(0,0,1,1);
   canv_pos_B_cent1_pn->SetFillColor(0);
   canv_pos_B_cent1_pn->SetBorderMode(0);
   canv_pos_B_cent1_pn->SetBorderSize(2);
   canv_pos_B_cent1_pn->SetTickx(1);
   canv_pos_B_cent1_pn->SetTicky(1);
   canv_pos_B_cent1_pn->SetLeftMargin(0.16);
   canv_pos_B_cent1_pn->SetRightMargin(0.05);
   canv_pos_B_cent1_pn->SetTopMargin(0.05);
   canv_pos_B_cent1_pn->SetBottomMargin(0.16);
   canv_pos_B_cent1_pn->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c_1
   TPad *c_1 = new TPad("c_1", "c_1",0,0.008474576,1,0.9915254);
   c_1->Draw();
   c_1->cd();
   c_1->Range(-3.5,-2446.54,2.827273,3258.188);
   c_1->SetFillColor(0);
   c_1->SetBorderMode(0);
   c_1->SetBorderSize(2);
   c_1->SetTickx(1);
   c_1->SetTicky(1);
   c_1->SetLeftMargin(0.158046);
   c_1->SetRightMargin(0.05172414);
   c_1->SetTopMargin(0.04525862);
   c_1->SetBottomMargin(0.4288793);
   c_1->SetFrameBorderMode(0);
   Double_t xAxis177[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pn_B_Cw_hPosEff_pt0_cent1_total__176 = new TH1D("pn_B_Cw_hPosEff_pt0_cent1_total__176","mu^{+},eff,all eta (total)",11, xAxis177);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetBinContent(1,660);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetBinContent(2,1321);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetBinContent(3,1393);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetBinContent(4,1230);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetBinContent(5,1409);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetBinContent(6,580);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetBinContent(7,1364);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetBinContent(8,1162);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetBinContent(9,1186);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetBinContent(10,1199);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetBinContent(11,796);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetMinimum(0.1);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetMaximum(1659);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetEntries(12300);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pn_B_Cw_hPosEff_pt0_cent1_total__176->SetLineColor(ci);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   pn_B_Cw_hPosEff_pt0_cent1_total__176->GetXaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->GetXaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->GetXaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->GetXaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->GetYaxis()->SetTitle("Events");
   pn_B_Cw_hPosEff_pt0_cent1_total__176->GetYaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->GetYaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->GetYaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->GetYaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->GetZaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->GetZaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->GetZaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->GetZaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_total__176->Draw("hist");
   Double_t xAxis178[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pn_B_Cw_hPosEff_pt0_cent1_passed__177 = new TH1D("pn_B_Cw_hPosEff_pt0_cent1_passed__177","mu^{+},eff,all eta (passed)",11, xAxis178);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetBinContent(1,458);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetBinContent(2,1079);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetBinContent(3,1087);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetBinContent(4,818);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetBinContent(5,1055);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetBinContent(6,193);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetBinContent(7,1050);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetBinContent(8,760);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetBinContent(9,964);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetBinContent(10,1037);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetBinContent(11,547);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetEntries(9048);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->SetLineColor(ci);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->GetXaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->GetXaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->GetXaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->GetXaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->GetYaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->GetYaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->GetYaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->GetYaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->GetZaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->GetZaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->GetZaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->GetZaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_passed__177->Draw("histsame");
   Double_t xAxis179[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pn_B_Cw_hPosEff_pt0_cent1_total__178 = new TH1D("pn_B_Cw_hPosEff_pt0_cent1_total__178","mu^{+},eff,all eta (total)",11, xAxis179);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetBinContent(1,660);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetBinContent(2,1321);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetBinContent(3,1393);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetBinContent(4,1230);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetBinContent(5,1409);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetBinContent(6,580);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetBinContent(7,1364);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetBinContent(8,1162);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetBinContent(9,1186);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetBinContent(10,1199);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetBinContent(11,796);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetMinimum(0.1);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetMaximum(1659);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetEntries(12300);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pn_B_Cw_hPosEff_pt0_cent1_total__178->SetLineColor(ci);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   pn_B_Cw_hPosEff_pt0_cent1_total__178->GetXaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->GetXaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->GetXaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->GetXaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->GetYaxis()->SetTitle("Events");
   pn_B_Cw_hPosEff_pt0_cent1_total__178->GetYaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->GetYaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->GetYaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->GetYaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->GetZaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->GetZaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->GetZaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->GetZaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent1_total__178->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.6221264,0.4892241,"pn(PeriodB), #mu^{+} 5-10%");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04310345);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: c_2
   c_2 = new TPad("c_2", "c_2",0,0.00862069,1,0.4331897);
   c_2->Draw();
   c_2->cd();
   c_2->Range(-3.5,-0.08581081,2.827273,1.112162);
   c_2->SetFillColor(0);
   c_2->SetBorderMode(0);
   c_2->SetBorderSize(2);
   c_2->SetTickx(1);
   c_2->SetTicky(1);
   c_2->SetLeftMargin(0.158046);
   c_2->SetRightMargin(0.05172414);
   c_2->SetTopMargin(0.01015228);
   c_2->SetBottomMargin(0.2385787);
   c_2->SetFrameBorderMode(0);
   Double_t xAxis180[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1F *hdummy__179 = new TH1F("hdummy__179","hdummy",11, xAxis180);
   hdummy__179->SetMinimum(0.2);
   hdummy__179->SetMaximum(1.1);
   hdummy__179->SetDirectory(0);
   hdummy__179->SetStats(0);
   hdummy__179->SetLineWidth(2);
   hdummy__179->SetMarkerStyle(20);
   hdummy__179->SetMarkerSize(1.2);
   hdummy__179->GetXaxis()->SetTitle("#eta^{#mu}");
   hdummy__179->GetXaxis()->SetLabelFont(42);
   hdummy__179->GetXaxis()->SetLabelSize(0.07);
   hdummy__179->GetXaxis()->SetTitleSize(0.1);
   hdummy__179->GetXaxis()->SetTitleOffset(0.87);
   hdummy__179->GetXaxis()->SetTitleFont(42);
   hdummy__179->GetYaxis()->SetTitle("C_{W}");
   hdummy__179->GetYaxis()->SetLabelFont(42);
   hdummy__179->GetYaxis()->SetLabelSize(0.07);
   hdummy__179->GetYaxis()->SetTitleSize(0.09);
   hdummy__179->GetYaxis()->SetTitleOffset(0.44);
   hdummy__179->GetYaxis()->SetTitleFont(42);
   hdummy__179->GetZaxis()->SetLabelFont(42);
   hdummy__179->GetZaxis()->SetLabelSize(0.05);
   hdummy__179->GetZaxis()->SetTitleSize(0.05);
   hdummy__179->GetZaxis()->SetTitleFont(42);
   hdummy__179->Draw("");
   Double_t xAxis45[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TEfficiency * pn_B_Cw_hPosEff_pt0_cent145 = new TEfficiency("pn_B_Cw_hPosEff_pt0_cent1","mu^{+},eff,all eta",11,xAxis45);
   
   pn_B_Cw_hPosEff_pt0_cent145->SetConfidenceLevel(0.6826895);
   pn_B_Cw_hPosEff_pt0_cent145->SetBetaAlpha(1);
   pn_B_Cw_hPosEff_pt0_cent145->SetBetaBeta(1);
   pn_B_Cw_hPosEff_pt0_cent145->SetWeight(0.08333333);
   pn_B_Cw_hPosEff_pt0_cent145->SetStatisticOption(0);
   pn_B_Cw_hPosEff_pt0_cent145->SetPosteriorMode(0);
   pn_B_Cw_hPosEff_pt0_cent145->SetShortestInterval(0);
   pn_B_Cw_hPosEff_pt0_cent145->SetTotalEvents(0,0);
   pn_B_Cw_hPosEff_pt0_cent145->SetPassedEvents(0,0);
   pn_B_Cw_hPosEff_pt0_cent145->SetTotalEvents(1,660);
   pn_B_Cw_hPosEff_pt0_cent145->SetPassedEvents(1,458);
   pn_B_Cw_hPosEff_pt0_cent145->SetTotalEvents(2,1321);
   pn_B_Cw_hPosEff_pt0_cent145->SetPassedEvents(2,1079);
   pn_B_Cw_hPosEff_pt0_cent145->SetTotalEvents(3,1393);
   pn_B_Cw_hPosEff_pt0_cent145->SetPassedEvents(3,1087);
   pn_B_Cw_hPosEff_pt0_cent145->SetTotalEvents(4,1230);
   pn_B_Cw_hPosEff_pt0_cent145->SetPassedEvents(4,818);
   pn_B_Cw_hPosEff_pt0_cent145->SetTotalEvents(5,1409);
   pn_B_Cw_hPosEff_pt0_cent145->SetPassedEvents(5,1055);
   pn_B_Cw_hPosEff_pt0_cent145->SetTotalEvents(6,580);
   pn_B_Cw_hPosEff_pt0_cent145->SetPassedEvents(6,193);
   pn_B_Cw_hPosEff_pt0_cent145->SetTotalEvents(7,1364);
   pn_B_Cw_hPosEff_pt0_cent145->SetPassedEvents(7,1050);
   pn_B_Cw_hPosEff_pt0_cent145->SetTotalEvents(8,1162);
   pn_B_Cw_hPosEff_pt0_cent145->SetPassedEvents(8,760);
   pn_B_Cw_hPosEff_pt0_cent145->SetTotalEvents(9,1186);
   pn_B_Cw_hPosEff_pt0_cent145->SetPassedEvents(9,964);
   pn_B_Cw_hPosEff_pt0_cent145->SetTotalEvents(10,1199);
   pn_B_Cw_hPosEff_pt0_cent145->SetPassedEvents(10,1037);
   pn_B_Cw_hPosEff_pt0_cent145->SetTotalEvents(11,796);
   pn_B_Cw_hPosEff_pt0_cent145->SetPassedEvents(11,547);
   pn_B_Cw_hPosEff_pt0_cent145->SetTotalEvents(12,0);
   pn_B_Cw_hPosEff_pt0_cent145->SetPassedEvents(12,0);
   pn_B_Cw_hPosEff_pt0_cent145->SetFillColor(19);
   pn_B_Cw_hPosEff_pt0_cent145->Draw("pesame");
   c_2->Modified();
   c_1->cd();
   c_1->Modified();
   canv_pos_B_cent1_pn->cd();
   canv_pos_B_cent1_pn->Modified();
   canv_pos_B_cent1_pn->cd();
   canv_pos_B_cent1_pn->SetSelected(canv_pos_B_cent1_pn);
}
