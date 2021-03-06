{
//=========Macro generated from canvas: canv_pos_A_cent3_pp/canv_pos_A_cent3_pp
//=========  (Tue Sep 30 17:57:20 2014) by ROOT version5.34/21
   TCanvas *canv_pos_A_cent3_pp = new TCanvas("canv_pos_A_cent3_pp", "canv_pos_A_cent3_pp",0,0,700,500);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canv_pos_A_cent3_pp->SetHighLightColor(2);
   canv_pos_A_cent3_pp->Range(0,0,1,1);
   canv_pos_A_cent3_pp->SetFillColor(0);
   canv_pos_A_cent3_pp->SetBorderMode(0);
   canv_pos_A_cent3_pp->SetBorderSize(2);
   canv_pos_A_cent3_pp->SetTickx(1);
   canv_pos_A_cent3_pp->SetTicky(1);
   canv_pos_A_cent3_pp->SetLeftMargin(0.16);
   canv_pos_A_cent3_pp->SetRightMargin(0.05);
   canv_pos_A_cent3_pp->SetTopMargin(0.05);
   canv_pos_A_cent3_pp->SetBottomMargin(0.16);
   canv_pos_A_cent3_pp->SetFrameBorderMode(0);
  
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
   Double_t xAxis141[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pp_A_Cw_hPosEff_pt0_cent3_total__140 = new TH1D("pp_A_Cw_hPosEff_pt0_cent3_total__140","mu^{+},eff,all eta (total)",11, xAxis141);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetBinContent(1,1469);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetBinContent(2,2081);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetBinContent(3,1925);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetBinContent(4,1641);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetBinContent(5,1771);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetBinContent(6,715);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetBinContent(7,1938);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetBinContent(8,1701);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetBinContent(9,1910);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetBinContent(10,1759);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetBinContent(11,768);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetMinimum(0.1);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetMaximum(2331);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetEntries(17678);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pp_A_Cw_hPosEff_pt0_cent3_total__140->SetLineColor(ci);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   pp_A_Cw_hPosEff_pt0_cent3_total__140->GetXaxis()->SetLabelFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->GetXaxis()->SetLabelSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->GetXaxis()->SetTitleSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->GetXaxis()->SetTitleFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->GetYaxis()->SetTitle("Events");
   pp_A_Cw_hPosEff_pt0_cent3_total__140->GetYaxis()->SetLabelFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->GetYaxis()->SetLabelSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->GetYaxis()->SetTitleSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->GetYaxis()->SetTitleFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->GetZaxis()->SetLabelFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->GetZaxis()->SetLabelSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->GetZaxis()->SetTitleSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->GetZaxis()->SetTitleFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_total__140->Draw("hist");
   Double_t xAxis142[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pp_A_Cw_hPosEff_pt0_cent3_passed__141 = new TH1D("pp_A_Cw_hPosEff_pt0_cent3_passed__141","mu^{+},eff,all eta (passed)",11, xAxis142);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetBinContent(1,1071);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetBinContent(2,1670);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetBinContent(3,1511);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetBinContent(4,1069);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetBinContent(5,1325);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetBinContent(6,250);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetBinContent(7,1498);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetBinContent(8,1101);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetBinContent(9,1602);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetBinContent(10,1520);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetBinContent(11,568);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetEntries(13185);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->SetLineColor(ci);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->GetXaxis()->SetLabelFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->GetXaxis()->SetLabelSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->GetXaxis()->SetTitleSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->GetXaxis()->SetTitleFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->GetYaxis()->SetLabelFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->GetYaxis()->SetLabelSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->GetYaxis()->SetTitleSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->GetYaxis()->SetTitleFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->GetZaxis()->SetLabelFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->GetZaxis()->SetLabelSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->GetZaxis()->SetTitleSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->GetZaxis()->SetTitleFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_passed__141->Draw("histsame");
   Double_t xAxis143[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *pp_A_Cw_hPosEff_pt0_cent3_total__142 = new TH1D("pp_A_Cw_hPosEff_pt0_cent3_total__142","mu^{+},eff,all eta (total)",11, xAxis143);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetBinContent(1,1469);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetBinContent(2,2081);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetBinContent(3,1925);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetBinContent(4,1641);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetBinContent(5,1771);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetBinContent(6,715);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetBinContent(7,1938);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetBinContent(8,1701);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetBinContent(9,1910);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetBinContent(10,1759);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetBinContent(11,768);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetMinimum(0.1);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetMaximum(2331);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetEntries(17678);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   pp_A_Cw_hPosEff_pt0_cent3_total__142->SetLineColor(ci);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   pp_A_Cw_hPosEff_pt0_cent3_total__142->GetXaxis()->SetLabelFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->GetXaxis()->SetLabelSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->GetXaxis()->SetTitleSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->GetXaxis()->SetTitleFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->GetYaxis()->SetTitle("Events");
   pp_A_Cw_hPosEff_pt0_cent3_total__142->GetYaxis()->SetLabelFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->GetYaxis()->SetLabelSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->GetYaxis()->SetTitleSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->GetYaxis()->SetTitleFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->GetZaxis()->SetLabelFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->GetZaxis()->SetLabelSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->GetZaxis()->SetTitleSize(0.035);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->GetZaxis()->SetTitleFont(42);
   pp_A_Cw_hPosEff_pt0_cent3_total__142->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.6221264,0.4892241,"pp(PeriodA), #mu^{+} 20-30%");
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
   Double_t xAxis144[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1F *hdummy__143 = new TH1F("hdummy__143","hdummy",11, xAxis144);
   hdummy__143->SetMinimum(0.2);
   hdummy__143->SetMaximum(1.1);
   hdummy__143->SetDirectory(0);
   hdummy__143->SetStats(0);
   hdummy__143->SetLineWidth(2);
   hdummy__143->SetMarkerStyle(20);
   hdummy__143->SetMarkerSize(1.2);
   hdummy__143->GetXaxis()->SetTitle("#eta^{#mu}");
   hdummy__143->GetXaxis()->SetLabelFont(42);
   hdummy__143->GetXaxis()->SetLabelSize(0.07);
   hdummy__143->GetXaxis()->SetTitleSize(0.1);
   hdummy__143->GetXaxis()->SetTitleOffset(0.87);
   hdummy__143->GetXaxis()->SetTitleFont(42);
   hdummy__143->GetYaxis()->SetTitle("C_{W}");
   hdummy__143->GetYaxis()->SetLabelFont(42);
   hdummy__143->GetYaxis()->SetLabelSize(0.07);
   hdummy__143->GetYaxis()->SetTitleSize(0.09);
   hdummy__143->GetYaxis()->SetTitleOffset(0.44);
   hdummy__143->GetYaxis()->SetTitleFont(42);
   hdummy__143->GetZaxis()->SetLabelFont(42);
   hdummy__143->GetZaxis()->SetLabelSize(0.05);
   hdummy__143->GetZaxis()->SetTitleSize(0.05);
   hdummy__143->GetZaxis()->SetTitleFont(42);
   hdummy__143->Draw("");
   Double_t xAxis36[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TEfficiency * pp_A_Cw_hPosEff_pt0_cent336 = new TEfficiency("pp_A_Cw_hPosEff_pt0_cent3","mu^{+},eff,all eta",11,xAxis36);
   
   pp_A_Cw_hPosEff_pt0_cent336->SetConfidenceLevel(0.6826895);
   pp_A_Cw_hPosEff_pt0_cent336->SetBetaAlpha(1);
   pp_A_Cw_hPosEff_pt0_cent336->SetBetaBeta(1);
   pp_A_Cw_hPosEff_pt0_cent336->SetWeight(0.08333333);
   pp_A_Cw_hPosEff_pt0_cent336->SetStatisticOption(0);
   pp_A_Cw_hPosEff_pt0_cent336->SetPosteriorMode(0);
   pp_A_Cw_hPosEff_pt0_cent336->SetShortestInterval(0);
   pp_A_Cw_hPosEff_pt0_cent336->SetTotalEvents(0,0);
   pp_A_Cw_hPosEff_pt0_cent336->SetPassedEvents(0,0);
   pp_A_Cw_hPosEff_pt0_cent336->SetTotalEvents(1,1469);
   pp_A_Cw_hPosEff_pt0_cent336->SetPassedEvents(1,1071);
   pp_A_Cw_hPosEff_pt0_cent336->SetTotalEvents(2,2081);
   pp_A_Cw_hPosEff_pt0_cent336->SetPassedEvents(2,1670);
   pp_A_Cw_hPosEff_pt0_cent336->SetTotalEvents(3,1925);
   pp_A_Cw_hPosEff_pt0_cent336->SetPassedEvents(3,1511);
   pp_A_Cw_hPosEff_pt0_cent336->SetTotalEvents(4,1641);
   pp_A_Cw_hPosEff_pt0_cent336->SetPassedEvents(4,1069);
   pp_A_Cw_hPosEff_pt0_cent336->SetTotalEvents(5,1771);
   pp_A_Cw_hPosEff_pt0_cent336->SetPassedEvents(5,1325);
   pp_A_Cw_hPosEff_pt0_cent336->SetTotalEvents(6,715);
   pp_A_Cw_hPosEff_pt0_cent336->SetPassedEvents(6,250);
   pp_A_Cw_hPosEff_pt0_cent336->SetTotalEvents(7,1938);
   pp_A_Cw_hPosEff_pt0_cent336->SetPassedEvents(7,1498);
   pp_A_Cw_hPosEff_pt0_cent336->SetTotalEvents(8,1701);
   pp_A_Cw_hPosEff_pt0_cent336->SetPassedEvents(8,1101);
   pp_A_Cw_hPosEff_pt0_cent336->SetTotalEvents(9,1910);
   pp_A_Cw_hPosEff_pt0_cent336->SetPassedEvents(9,1602);
   pp_A_Cw_hPosEff_pt0_cent336->SetTotalEvents(10,1759);
   pp_A_Cw_hPosEff_pt0_cent336->SetPassedEvents(10,1520);
   pp_A_Cw_hPosEff_pt0_cent336->SetTotalEvents(11,768);
   pp_A_Cw_hPosEff_pt0_cent336->SetPassedEvents(11,568);
   pp_A_Cw_hPosEff_pt0_cent336->SetTotalEvents(12,0);
   pp_A_Cw_hPosEff_pt0_cent336->SetPassedEvents(12,0);
   pp_A_Cw_hPosEff_pt0_cent336->SetFillColor(19);
   pp_A_Cw_hPosEff_pt0_cent336->Draw("pesame");
   c_2->Modified();
   c_1->cd();
   c_1->Modified();
   canv_pos_A_cent3_pp->cd();
   canv_pos_A_cent3_pp->Modified();
   canv_pos_A_cent3_pp->cd();
   canv_pos_A_cent3_pp->SetSelected(canv_pos_A_cent3_pp);
}
