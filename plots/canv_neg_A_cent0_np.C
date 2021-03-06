{
//=========Macro generated from canvas: canv_neg_A_cent0_np/canv_neg_A_cent0_np
//=========  (Tue Sep 30 17:57:16 2014) by ROOT version5.34/21
   TCanvas *canv_neg_A_cent0_np = new TCanvas("canv_neg_A_cent0_np", "canv_neg_A_cent0_np",0,0,700,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canv_neg_A_cent0_np->SetHighLightColor(2);
   canv_neg_A_cent0_np->Range(0,0,1,1);
   canv_neg_A_cent0_np->SetFillColor(0);
   canv_neg_A_cent0_np->SetBorderMode(0);
   canv_neg_A_cent0_np->SetBorderSize(2);
   canv_neg_A_cent0_np->SetTickx(1);
   canv_neg_A_cent0_np->SetTicky(1);
   canv_neg_A_cent0_np->SetLeftMargin(0.16);
   canv_neg_A_cent0_np->SetRightMargin(0.05);
   canv_neg_A_cent0_np->SetTopMargin(0.05);
   canv_neg_A_cent0_np->SetBottomMargin(0.16);
   canv_neg_A_cent0_np->SetFrameBorderMode(0);
  
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
   Double_t xAxis1[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *np_A_Cw_hNegEff_pt0_cent0_total__1 = new TH1D("np_A_Cw_hNegEff_pt0_cent0_total__1","mu^{-},eff,all eta (total)",11, xAxis1);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetBinContent(1,488);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetBinContent(2,633);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetBinContent(3,566);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetBinContent(4,489);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetBinContent(5,564);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetBinContent(6,196);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetBinContent(7,461);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetBinContent(8,419);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetBinContent(9,370);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetBinContent(10,387);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetBinContent(11,221);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetMinimum(0.1);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetMaximum(883);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetEntries(4794);
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   np_A_Cw_hNegEff_pt0_cent0_total__1->SetLineColor(ci);
   np_A_Cw_hNegEff_pt0_cent0_total__1->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   np_A_Cw_hNegEff_pt0_cent0_total__1->GetXaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent0_total__1->GetXaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_total__1->GetXaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_total__1->GetXaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent0_total__1->GetYaxis()->SetTitle("Events");
   np_A_Cw_hNegEff_pt0_cent0_total__1->GetYaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent0_total__1->GetYaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_total__1->GetYaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_total__1->GetYaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent0_total__1->GetZaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent0_total__1->GetZaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_total__1->GetZaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_total__1->GetZaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent0_total__1->Draw("hist");
   Double_t xAxis2[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *np_A_Cw_hNegEff_pt0_cent0_passed__2 = new TH1D("np_A_Cw_hNegEff_pt0_cent0_passed__2","mu^{-},eff,all eta (passed)",11, xAxis2);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetBinContent(1,254);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetBinContent(2,500);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetBinContent(3,405);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetBinContent(4,329);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetBinContent(5,419);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetBinContent(6,57);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetBinContent(7,352);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetBinContent(8,273);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetBinContent(9,291);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetBinContent(10,299);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetBinContent(11,144);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetEntries(3323);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   np_A_Cw_hNegEff_pt0_cent0_passed__2->SetLineColor(ci);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->GetXaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->GetXaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->GetXaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->GetXaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->GetYaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->GetYaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->GetYaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->GetYaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->GetZaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->GetZaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->GetZaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->GetZaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent0_passed__2->Draw("histsame");
   Double_t xAxis3[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *np_A_Cw_hNegEff_pt0_cent0_total__3 = new TH1D("np_A_Cw_hNegEff_pt0_cent0_total__3","mu^{-},eff,all eta (total)",11, xAxis3);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetBinContent(1,488);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetBinContent(2,633);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetBinContent(3,566);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetBinContent(4,489);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetBinContent(5,564);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetBinContent(6,196);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetBinContent(7,461);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetBinContent(8,419);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetBinContent(9,370);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetBinContent(10,387);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetBinContent(11,221);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetMinimum(0.1);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetMaximum(883);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetEntries(4794);
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   np_A_Cw_hNegEff_pt0_cent0_total__3->SetLineColor(ci);
   np_A_Cw_hNegEff_pt0_cent0_total__3->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   np_A_Cw_hNegEff_pt0_cent0_total__3->GetXaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent0_total__3->GetXaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_total__3->GetXaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_total__3->GetXaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent0_total__3->GetYaxis()->SetTitle("Events");
   np_A_Cw_hNegEff_pt0_cent0_total__3->GetYaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent0_total__3->GetYaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_total__3->GetYaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_total__3->GetYaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent0_total__3->GetZaxis()->SetLabelFont(42);
   np_A_Cw_hNegEff_pt0_cent0_total__3->GetZaxis()->SetLabelSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_total__3->GetZaxis()->SetTitleSize(0.035);
   np_A_Cw_hNegEff_pt0_cent0_total__3->GetZaxis()->SetTitleFont(42);
   np_A_Cw_hNegEff_pt0_cent0_total__3->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.6221264,0.4892241,"np(PeriodA), #mu^{-} 0-5%");
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
   Double_t xAxis4[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1F *hdummy__4 = new TH1F("hdummy__4","hdummy",11, xAxis4);
   hdummy__4->SetMinimum(0.2);
   hdummy__4->SetMaximum(1.1);
   hdummy__4->SetDirectory(0);
   hdummy__4->SetStats(0);
   hdummy__4->SetLineWidth(2);
   hdummy__4->SetMarkerStyle(20);
   hdummy__4->SetMarkerSize(1.2);
   hdummy__4->GetXaxis()->SetTitle("#eta^{#mu}");
   hdummy__4->GetXaxis()->SetLabelFont(42);
   hdummy__4->GetXaxis()->SetLabelSize(0.07);
   hdummy__4->GetXaxis()->SetTitleSize(0.1);
   hdummy__4->GetXaxis()->SetTitleOffset(0.87);
   hdummy__4->GetXaxis()->SetTitleFont(42);
   hdummy__4->GetYaxis()->SetTitle("C_{W}");
   hdummy__4->GetYaxis()->SetLabelFont(42);
   hdummy__4->GetYaxis()->SetLabelSize(0.07);
   hdummy__4->GetYaxis()->SetTitleSize(0.09);
   hdummy__4->GetYaxis()->SetTitleOffset(0.44);
   hdummy__4->GetYaxis()->SetTitleFont(42);
   hdummy__4->GetZaxis()->SetLabelFont(42);
   hdummy__4->GetZaxis()->SetLabelSize(0.05);
   hdummy__4->GetZaxis()->SetTitleSize(0.05);
   hdummy__4->GetZaxis()->SetTitleFont(42);
   hdummy__4->Draw("");
   Double_t xAxis1[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TEfficiency * np_A_Cw_hNegEff_pt0_cent01 = new TEfficiency("np_A_Cw_hNegEff_pt0_cent0","mu^{-},eff,all eta",11,xAxis1);
   
   np_A_Cw_hNegEff_pt0_cent01->SetConfidenceLevel(0.6826895);
   np_A_Cw_hNegEff_pt0_cent01->SetBetaAlpha(1);
   np_A_Cw_hNegEff_pt0_cent01->SetBetaBeta(1);
   np_A_Cw_hNegEff_pt0_cent01->SetWeight(0.08333333);
   np_A_Cw_hNegEff_pt0_cent01->SetStatisticOption(0);
   np_A_Cw_hNegEff_pt0_cent01->SetPosteriorMode(0);
   np_A_Cw_hNegEff_pt0_cent01->SetShortestInterval(0);
   np_A_Cw_hNegEff_pt0_cent01->SetTotalEvents(0,0);
   np_A_Cw_hNegEff_pt0_cent01->SetPassedEvents(0,0);
   np_A_Cw_hNegEff_pt0_cent01->SetTotalEvents(1,488);
   np_A_Cw_hNegEff_pt0_cent01->SetPassedEvents(1,254);
   np_A_Cw_hNegEff_pt0_cent01->SetTotalEvents(2,633);
   np_A_Cw_hNegEff_pt0_cent01->SetPassedEvents(2,500);
   np_A_Cw_hNegEff_pt0_cent01->SetTotalEvents(3,566);
   np_A_Cw_hNegEff_pt0_cent01->SetPassedEvents(3,405);
   np_A_Cw_hNegEff_pt0_cent01->SetTotalEvents(4,489);
   np_A_Cw_hNegEff_pt0_cent01->SetPassedEvents(4,329);
   np_A_Cw_hNegEff_pt0_cent01->SetTotalEvents(5,564);
   np_A_Cw_hNegEff_pt0_cent01->SetPassedEvents(5,419);
   np_A_Cw_hNegEff_pt0_cent01->SetTotalEvents(6,196);
   np_A_Cw_hNegEff_pt0_cent01->SetPassedEvents(6,57);
   np_A_Cw_hNegEff_pt0_cent01->SetTotalEvents(7,461);
   np_A_Cw_hNegEff_pt0_cent01->SetPassedEvents(7,352);
   np_A_Cw_hNegEff_pt0_cent01->SetTotalEvents(8,419);
   np_A_Cw_hNegEff_pt0_cent01->SetPassedEvents(8,273);
   np_A_Cw_hNegEff_pt0_cent01->SetTotalEvents(9,370);
   np_A_Cw_hNegEff_pt0_cent01->SetPassedEvents(9,291);
   np_A_Cw_hNegEff_pt0_cent01->SetTotalEvents(10,387);
   np_A_Cw_hNegEff_pt0_cent01->SetPassedEvents(10,299);
   np_A_Cw_hNegEff_pt0_cent01->SetTotalEvents(11,221);
   np_A_Cw_hNegEff_pt0_cent01->SetPassedEvents(11,144);
   np_A_Cw_hNegEff_pt0_cent01->SetTotalEvents(12,0);
   np_A_Cw_hNegEff_pt0_cent01->SetPassedEvents(12,0);
   np_A_Cw_hNegEff_pt0_cent01->SetFillColor(19);
   np_A_Cw_hNegEff_pt0_cent01->Draw("pesame");
   c_2->Modified();
   c_1->cd();
   c_1->Modified();
   canv_neg_A_cent0_np->cd();
   canv_neg_A_cent0_np->Modified();
   canv_neg_A_cent0_np->cd();
   canv_neg_A_cent0_np->SetSelected(canv_neg_A_cent0_np);
}
