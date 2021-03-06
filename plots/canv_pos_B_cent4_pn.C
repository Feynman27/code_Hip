{
//=========Macro generated from canvas: canv_pos_B_cent4_pn/canv_pos_B_cent4_pn
//=========  (Tue Sep 30 17:57:21 2014) by ROOT version5.34/21
   TCanvas *canv_pos_B_cent4_pn = new TCanvas("canv_pos_B_cent4_pn", "canv_pos_B_cent4_pn",0,0,700,500);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canv_pos_B_cent4_pn->SetHighLightColor(2);
   canv_pos_B_cent4_pn->Range(0,0,1,1);
   canv_pos_B_cent4_pn->SetFillColor(0);
   canv_pos_B_cent4_pn->SetBorderMode(0);
   canv_pos_B_cent4_pn->SetBorderSize(2);
   canv_pos_B_cent4_pn->SetTickx(1);
   canv_pos_B_cent4_pn->SetTicky(1);
   canv_pos_B_cent4_pn->SetLeftMargin(0.16);
   canv_pos_B_cent4_pn->SetRightMargin(0.05);
   canv_pos_B_cent4_pn->SetTopMargin(0.05);
   canv_pos_B_cent4_pn->SetBottomMargin(0.16);
   canv_pos_B_cent4_pn->SetFrameBorderMode(0);
  
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
   Double_t xAxis201[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pn_B_Cw_hPosEff_pt0_cent4_total__200 = new TH1D("pn_B_Cw_hPosEff_pt0_cent4_total__200","mu^{+},eff,all eta (total)",11, xAxis201);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetBinContent(1,1091);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetBinContent(2,2349);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetBinContent(3,2468);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetBinContent(4,2321);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetBinContent(5,2436);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetBinContent(6,983);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetBinContent(7,2355);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetBinContent(8,1966);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetBinContent(9,2120);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetBinContent(10,2108);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetBinContent(11,1316);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetMinimum(0.1);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetMaximum(2718);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetEntries(21513);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pn_B_Cw_hPosEff_pt0_cent4_total__200->SetLineColor(ci);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   pn_B_Cw_hPosEff_pt0_cent4_total__200->GetXaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->GetXaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->GetXaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->GetXaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->GetYaxis()->SetTitle("Events");
   pn_B_Cw_hPosEff_pt0_cent4_total__200->GetYaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->GetYaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->GetYaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->GetYaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->GetZaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->GetZaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->GetZaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->GetZaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_total__200->Draw("hist");
   Double_t xAxis202[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pn_B_Cw_hPosEff_pt0_cent4_passed__201 = new TH1D("pn_B_Cw_hPosEff_pt0_cent4_passed__201","mu^{+},eff,all eta (passed)",11, xAxis202);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetBinContent(1,826);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetBinContent(2,1911);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetBinContent(3,1889);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetBinContent(4,1570);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetBinContent(5,1853);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetBinContent(6,310);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetBinContent(7,1863);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetBinContent(8,1336);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetBinContent(9,1791);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetBinContent(10,1869);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetBinContent(11,905);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetEntries(16123);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->SetLineColor(ci);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->GetXaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->GetXaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->GetXaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->GetXaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->GetYaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->GetYaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->GetYaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->GetYaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->GetZaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->GetZaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->GetZaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->GetZaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_passed__201->Draw("histsame");
   Double_t xAxis203[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pn_B_Cw_hPosEff_pt0_cent4_total__202 = new TH1D("pn_B_Cw_hPosEff_pt0_cent4_total__202","mu^{+},eff,all eta (total)",11, xAxis203);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetBinContent(1,1091);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetBinContent(2,2349);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetBinContent(3,2468);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetBinContent(4,2321);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetBinContent(5,2436);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetBinContent(6,983);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetBinContent(7,2355);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetBinContent(8,1966);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetBinContent(9,2120);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetBinContent(10,2108);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetBinContent(11,1316);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetMinimum(0.1);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetMaximum(2718);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetEntries(21513);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pn_B_Cw_hPosEff_pt0_cent4_total__202->SetLineColor(ci);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   pn_B_Cw_hPosEff_pt0_cent4_total__202->GetXaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->GetXaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->GetXaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->GetXaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->GetYaxis()->SetTitle("Events");
   pn_B_Cw_hPosEff_pt0_cent4_total__202->GetYaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->GetYaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->GetYaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->GetYaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->GetZaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->GetZaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->GetZaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->GetZaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent4_total__202->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.6221264,0.4892241,"pn(PeriodB), #mu^{+} 30-40%");
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
   Double_t xAxis204[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1F *hdummy__203 = new TH1F("hdummy__203","hdummy",11, xAxis204);
   hdummy__203->SetMinimum(0.2);
   hdummy__203->SetMaximum(1.1);
   hdummy__203->SetDirectory(0);
   hdummy__203->SetStats(0);
   hdummy__203->SetLineWidth(2);
   hdummy__203->SetMarkerStyle(20);
   hdummy__203->SetMarkerSize(1.2);
   hdummy__203->GetXaxis()->SetTitle("#eta^{#mu}");
   hdummy__203->GetXaxis()->SetLabelFont(42);
   hdummy__203->GetXaxis()->SetLabelSize(0.07);
   hdummy__203->GetXaxis()->SetTitleSize(0.1);
   hdummy__203->GetXaxis()->SetTitleOffset(0.87);
   hdummy__203->GetXaxis()->SetTitleFont(42);
   hdummy__203->GetYaxis()->SetTitle("C_{W}");
   hdummy__203->GetYaxis()->SetLabelFont(42);
   hdummy__203->GetYaxis()->SetLabelSize(0.07);
   hdummy__203->GetYaxis()->SetTitleSize(0.09);
   hdummy__203->GetYaxis()->SetTitleOffset(0.44);
   hdummy__203->GetYaxis()->SetTitleFont(42);
   hdummy__203->GetZaxis()->SetLabelFont(42);
   hdummy__203->GetZaxis()->SetLabelSize(0.05);
   hdummy__203->GetZaxis()->SetTitleSize(0.05);
   hdummy__203->GetZaxis()->SetTitleFont(42);
   hdummy__203->Draw("");
   Double_t xAxis51[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TEfficiency * pn_B_Cw_hPosEff_pt0_cent451 = new TEfficiency("pn_B_Cw_hPosEff_pt0_cent4","mu^{+},eff,all eta",11,xAxis51);
   
   pn_B_Cw_hPosEff_pt0_cent451->SetConfidenceLevel(0.6826895);
   pn_B_Cw_hPosEff_pt0_cent451->SetBetaAlpha(1);
   pn_B_Cw_hPosEff_pt0_cent451->SetBetaBeta(1);
   pn_B_Cw_hPosEff_pt0_cent451->SetWeight(0.08333333);
   pn_B_Cw_hPosEff_pt0_cent451->SetStatisticOption(0);
   pn_B_Cw_hPosEff_pt0_cent451->SetPosteriorMode(0);
   pn_B_Cw_hPosEff_pt0_cent451->SetShortestInterval(0);
   pn_B_Cw_hPosEff_pt0_cent451->SetTotalEvents(0,0);
   pn_B_Cw_hPosEff_pt0_cent451->SetPassedEvents(0,0);
   pn_B_Cw_hPosEff_pt0_cent451->SetTotalEvents(1,1091);
   pn_B_Cw_hPosEff_pt0_cent451->SetPassedEvents(1,826);
   pn_B_Cw_hPosEff_pt0_cent451->SetTotalEvents(2,2349);
   pn_B_Cw_hPosEff_pt0_cent451->SetPassedEvents(2,1911);
   pn_B_Cw_hPosEff_pt0_cent451->SetTotalEvents(3,2468);
   pn_B_Cw_hPosEff_pt0_cent451->SetPassedEvents(3,1889);
   pn_B_Cw_hPosEff_pt0_cent451->SetTotalEvents(4,2321);
   pn_B_Cw_hPosEff_pt0_cent451->SetPassedEvents(4,1570);
   pn_B_Cw_hPosEff_pt0_cent451->SetTotalEvents(5,2436);
   pn_B_Cw_hPosEff_pt0_cent451->SetPassedEvents(5,1853);
   pn_B_Cw_hPosEff_pt0_cent451->SetTotalEvents(6,983);
   pn_B_Cw_hPosEff_pt0_cent451->SetPassedEvents(6,310);
   pn_B_Cw_hPosEff_pt0_cent451->SetTotalEvents(7,2355);
   pn_B_Cw_hPosEff_pt0_cent451->SetPassedEvents(7,1863);
   pn_B_Cw_hPosEff_pt0_cent451->SetTotalEvents(8,1966);
   pn_B_Cw_hPosEff_pt0_cent451->SetPassedEvents(8,1336);
   pn_B_Cw_hPosEff_pt0_cent451->SetTotalEvents(9,2120);
   pn_B_Cw_hPosEff_pt0_cent451->SetPassedEvents(9,1791);
   pn_B_Cw_hPosEff_pt0_cent451->SetTotalEvents(10,2108);
   pn_B_Cw_hPosEff_pt0_cent451->SetPassedEvents(10,1869);
   pn_B_Cw_hPosEff_pt0_cent451->SetTotalEvents(11,1316);
   pn_B_Cw_hPosEff_pt0_cent451->SetPassedEvents(11,905);
   pn_B_Cw_hPosEff_pt0_cent451->SetTotalEvents(12,0);
   pn_B_Cw_hPosEff_pt0_cent451->SetPassedEvents(12,0);
   pn_B_Cw_hPosEff_pt0_cent451->SetFillColor(19);
   pn_B_Cw_hPosEff_pt0_cent451->Draw("pesame");
   c_2->Modified();
   c_1->cd();
   c_1->Modified();
   canv_pos_B_cent4_pn->cd();
   canv_pos_B_cent4_pn->Modified();
   canv_pos_B_cent4_pn->cd();
   canv_pos_B_cent4_pn->SetSelected(canv_pos_B_cent4_pn);
}
