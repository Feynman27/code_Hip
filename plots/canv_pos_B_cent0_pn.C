{
//=========Macro generated from canvas: canv_pos_B_cent0_pn/canv_pos_B_cent0_pn
//=========  (Tue Sep 30 17:57:20 2014) by ROOT version5.34/21
   TCanvas *canv_pos_B_cent0_pn = new TCanvas("canv_pos_B_cent0_pn", "canv_pos_B_cent0_pn",0,0,700,500);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canv_pos_B_cent0_pn->SetHighLightColor(2);
   canv_pos_B_cent0_pn->Range(0,0,1,1);
   canv_pos_B_cent0_pn->SetFillColor(0);
   canv_pos_B_cent0_pn->SetBorderMode(0);
   canv_pos_B_cent0_pn->SetBorderSize(2);
   canv_pos_B_cent0_pn->SetTickx(1);
   canv_pos_B_cent0_pn->SetTicky(1);
   canv_pos_B_cent0_pn->SetLeftMargin(0.16);
   canv_pos_B_cent0_pn->SetRightMargin(0.05);
   canv_pos_B_cent0_pn->SetTopMargin(0.05);
   canv_pos_B_cent0_pn->SetBottomMargin(0.16);
   canv_pos_B_cent0_pn->SetFrameBorderMode(0);
  
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
   Double_t xAxis169[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pn_B_Cw_hPosEff_pt0_cent0_total__168 = new TH1D("pn_B_Cw_hPosEff_pt0_cent0_total__168","mu^{+},eff,all eta (total)",11, xAxis169);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetBinContent(1,655);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetBinContent(2,1467);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetBinContent(3,1575);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetBinContent(4,1483);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetBinContent(5,1577);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetBinContent(6,602);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetBinContent(7,1400);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetBinContent(8,1220);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetBinContent(9,1311);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetBinContent(10,1307);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetBinContent(11,772);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetMinimum(0.1);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetMaximum(1827);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetEntries(13369);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pn_B_Cw_hPosEff_pt0_cent0_total__168->SetLineColor(ci);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   pn_B_Cw_hPosEff_pt0_cent0_total__168->GetXaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->GetXaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->GetXaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->GetXaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->GetYaxis()->SetTitle("Events");
   pn_B_Cw_hPosEff_pt0_cent0_total__168->GetYaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->GetYaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->GetYaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->GetYaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->GetZaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->GetZaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->GetZaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->GetZaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_total__168->Draw("hist");
   Double_t xAxis170[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pn_B_Cw_hPosEff_pt0_cent0_passed__169 = new TH1D("pn_B_Cw_hPosEff_pt0_cent0_passed__169","mu^{+},eff,all eta (passed)",11, xAxis170);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetBinContent(1,468);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetBinContent(2,1154);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetBinContent(3,1200);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetBinContent(4,984);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetBinContent(5,1151);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetBinContent(6,191);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetBinContent(7,1063);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetBinContent(8,852);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetBinContent(9,1093);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetBinContent(10,1088);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetBinContent(11,561);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetEntries(9805);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->SetLineColor(ci);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->GetXaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->GetXaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->GetXaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->GetXaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->GetYaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->GetYaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->GetYaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->GetYaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->GetZaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->GetZaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->GetZaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->GetZaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_passed__169->Draw("histsame");
   Double_t xAxis171[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pn_B_Cw_hPosEff_pt0_cent0_total__170 = new TH1D("pn_B_Cw_hPosEff_pt0_cent0_total__170","mu^{+},eff,all eta (total)",11, xAxis171);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetBinContent(1,655);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetBinContent(2,1467);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetBinContent(3,1575);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetBinContent(4,1483);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetBinContent(5,1577);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetBinContent(6,602);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetBinContent(7,1400);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetBinContent(8,1220);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetBinContent(9,1311);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetBinContent(10,1307);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetBinContent(11,772);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetMinimum(0.1);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetMaximum(1827);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetEntries(13369);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pn_B_Cw_hPosEff_pt0_cent0_total__170->SetLineColor(ci);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   pn_B_Cw_hPosEff_pt0_cent0_total__170->GetXaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->GetXaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->GetXaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->GetXaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->GetYaxis()->SetTitle("Events");
   pn_B_Cw_hPosEff_pt0_cent0_total__170->GetYaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->GetYaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->GetYaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->GetYaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->GetZaxis()->SetLabelFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->GetZaxis()->SetLabelSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->GetZaxis()->SetTitleSize(0.035);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->GetZaxis()->SetTitleFont(42);
   pn_B_Cw_hPosEff_pt0_cent0_total__170->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.6221264,0.4892241,"pn(PeriodB), #mu^{+} 0-5%");
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
   Double_t xAxis172[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1F *hdummy__171 = new TH1F("hdummy__171","hdummy",11, xAxis172);
   hdummy__171->SetMinimum(0.2);
   hdummy__171->SetMaximum(1.1);
   hdummy__171->SetDirectory(0);
   hdummy__171->SetStats(0);
   hdummy__171->SetLineWidth(2);
   hdummy__171->SetMarkerStyle(20);
   hdummy__171->SetMarkerSize(1.2);
   hdummy__171->GetXaxis()->SetTitle("#eta^{#mu}");
   hdummy__171->GetXaxis()->SetLabelFont(42);
   hdummy__171->GetXaxis()->SetLabelSize(0.07);
   hdummy__171->GetXaxis()->SetTitleSize(0.1);
   hdummy__171->GetXaxis()->SetTitleOffset(0.87);
   hdummy__171->GetXaxis()->SetTitleFont(42);
   hdummy__171->GetYaxis()->SetTitle("C_{W}");
   hdummy__171->GetYaxis()->SetLabelFont(42);
   hdummy__171->GetYaxis()->SetLabelSize(0.07);
   hdummy__171->GetYaxis()->SetTitleSize(0.09);
   hdummy__171->GetYaxis()->SetTitleOffset(0.44);
   hdummy__171->GetYaxis()->SetTitleFont(42);
   hdummy__171->GetZaxis()->SetLabelFont(42);
   hdummy__171->GetZaxis()->SetLabelSize(0.05);
   hdummy__171->GetZaxis()->SetTitleSize(0.05);
   hdummy__171->GetZaxis()->SetTitleFont(42);
   hdummy__171->Draw("");
   Double_t xAxis43[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TEfficiency * pn_B_Cw_hPosEff_pt0_cent043 = new TEfficiency("pn_B_Cw_hPosEff_pt0_cent0","mu^{+},eff,all eta",11,xAxis43);
   
   pn_B_Cw_hPosEff_pt0_cent043->SetConfidenceLevel(0.6826895);
   pn_B_Cw_hPosEff_pt0_cent043->SetBetaAlpha(1);
   pn_B_Cw_hPosEff_pt0_cent043->SetBetaBeta(1);
   pn_B_Cw_hPosEff_pt0_cent043->SetWeight(0.08333333);
   pn_B_Cw_hPosEff_pt0_cent043->SetStatisticOption(0);
   pn_B_Cw_hPosEff_pt0_cent043->SetPosteriorMode(0);
   pn_B_Cw_hPosEff_pt0_cent043->SetShortestInterval(0);
   pn_B_Cw_hPosEff_pt0_cent043->SetTotalEvents(0,0);
   pn_B_Cw_hPosEff_pt0_cent043->SetPassedEvents(0,0);
   pn_B_Cw_hPosEff_pt0_cent043->SetTotalEvents(1,655);
   pn_B_Cw_hPosEff_pt0_cent043->SetPassedEvents(1,468);
   pn_B_Cw_hPosEff_pt0_cent043->SetTotalEvents(2,1467);
   pn_B_Cw_hPosEff_pt0_cent043->SetPassedEvents(2,1154);
   pn_B_Cw_hPosEff_pt0_cent043->SetTotalEvents(3,1575);
   pn_B_Cw_hPosEff_pt0_cent043->SetPassedEvents(3,1200);
   pn_B_Cw_hPosEff_pt0_cent043->SetTotalEvents(4,1483);
   pn_B_Cw_hPosEff_pt0_cent043->SetPassedEvents(4,984);
   pn_B_Cw_hPosEff_pt0_cent043->SetTotalEvents(5,1577);
   pn_B_Cw_hPosEff_pt0_cent043->SetPassedEvents(5,1151);
   pn_B_Cw_hPosEff_pt0_cent043->SetTotalEvents(6,602);
   pn_B_Cw_hPosEff_pt0_cent043->SetPassedEvents(6,191);
   pn_B_Cw_hPosEff_pt0_cent043->SetTotalEvents(7,1400);
   pn_B_Cw_hPosEff_pt0_cent043->SetPassedEvents(7,1063);
   pn_B_Cw_hPosEff_pt0_cent043->SetTotalEvents(8,1220);
   pn_B_Cw_hPosEff_pt0_cent043->SetPassedEvents(8,852);
   pn_B_Cw_hPosEff_pt0_cent043->SetTotalEvents(9,1311);
   pn_B_Cw_hPosEff_pt0_cent043->SetPassedEvents(9,1093);
   pn_B_Cw_hPosEff_pt0_cent043->SetTotalEvents(10,1307);
   pn_B_Cw_hPosEff_pt0_cent043->SetPassedEvents(10,1088);
   pn_B_Cw_hPosEff_pt0_cent043->SetTotalEvents(11,772);
   pn_B_Cw_hPosEff_pt0_cent043->SetPassedEvents(11,561);
   pn_B_Cw_hPosEff_pt0_cent043->SetTotalEvents(12,0);
   pn_B_Cw_hPosEff_pt0_cent043->SetPassedEvents(12,0);
   pn_B_Cw_hPosEff_pt0_cent043->SetFillColor(19);
   pn_B_Cw_hPosEff_pt0_cent043->Draw("pesame");
   c_2->Modified();
   c_1->cd();
   c_1->Modified();
   canv_pos_B_cent0_pn->cd();
   canv_pos_B_cent0_pn->Modified();
   canv_pos_B_cent0_pn->cd();
   canv_pos_B_cent0_pn->SetSelected(canv_pos_B_cent0_pn);
}
